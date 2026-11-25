#!/usr/bin/python3

# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

# relies on https://github.com/Maratyszcza/Opcodes
# pip install Opcodes

import sys
import os
import optparse
import subprocess
import copy
from dataclasses import dataclass, field
from typing import List, Optional, Dict
from opcodes import x86_64

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))

MNEMONICS_GPERF_FILE = "x86_64_mnemonics.gperf"

# -m 100 lets gperf search for a denser hash table (smaller word array).
# The mnemonics are too similar for a dense perfect hash, so we allow duplicate hash values
# (-D, resolved by a short linear scan): 19KB of tables instead of 49KB
GPERF_FILES = {
    "x86_64_registers.gperf": ["-m", "100"],
    MNEMONICS_GPERF_FILE: ["-m", "100", "-k1-4,$", "-D"],
}

# Must match Spasm_x86_64_OperandKind in include/spasm/x86_64.h
OPERAND_KINDS = {
    "r8": "K_R8",
    "r16": "K_R16",
    "r32": "K_R32",
    "r64": "K_R64",
    "xmm": "K_XMM",
    "ymm": "K_YMM",
    "zmm": "K_ZMM",
    "k": "K_K",
    "al": "K_AL",
    "ax": "K_AX",
    "eax": "K_EAX",
    "rax": "K_RAX",
    "cl": "K_CL",
    "xmm0": "K_XMM0",
    "m": "K_M",
    "m8": "K_M8",
    "m16": "K_M16",
    "m32": "K_M32",
    "m64": "K_M64",
    "m128": "K_M128",
    "m256": "K_M256",
    "m512": "K_M512",
    "vm32x": "K_VM32X",
    "vm32y": "K_VM32Y",
    "vm64x": "K_VM64X",
    "vm64y": "K_VM64Y",
    "vm32z": "K_VM32Z",
    "vm64z": "K_VM64Z",
    "imm8": "K_IMM8",
    "imm16": "K_IMM16",
    "imm32": "K_IMM32",
    "imm64": "K_IMM64",
    "1": "K_ONE",
    "3": "K_THREE",
    "rel8": "K_REL8",
    "rel32": "K_REL32",
}

# AVX-512 embedded rounding/sae are not operand kinds: the form accepts a rounding operand (E_ER,
# E_SAE) placed before the immediate, or last
ROUNDING_OPERANDS = {"{er}": "E_ER", "{sae}": "E_SAE"}

# Operands that are not encoded anywhere (fixed register or fixed value)
IMPLICIT_OPERANDS = {"al", "ax", "eax", "rax", "cl", "xmm0", "1", "3"}

OPERAND_WIDTHS = {
    "r8": 8, "r16": 16, "r32": 32, "r64": 64,
    "m8": 8, "m16": 16, "m32": 32, "m64": 64,
    "al": 8, "ax": 16, "eax": 32, "rax": 64,
}

# Integer instructions whose imm8 is a count or a bit index, never sign-extended
NON_SEXT_IMM_INSTRUCTIONS = {
    "RCL", "RCR", "ROL", "ROR", "SAL", "SAR", "SHL", "SHR", "SHLD", "SHRD",
    "BT", "BTC", "BTR", "BTS", "ENTER", "RET", "INT",
}

# Commutative VEX instructions of the 0F map: the encoder may swap their two sources to move an
# extended register (xmm8-15) from ModRM.rm to vvvv and use the 2-byte VEX prefix, like llvm-mc.
# vcmpps/vcmppd are only symmetric for some predicates, checked by the encoder
COMMUTABLE_VEX_INSTRUCTIONS = {
    "VADDPD", "VADDPS", "VANDPD", "VANDPS", "VCMPPD", "VCMPPS", "VMULPD", "VMULPS", "VORPD", "VORPS",
    "VPADDB", "VPADDD", "VPADDQ", "VPADDSB", "VPADDSW", "VPADDUSB", "VPADDUSW", "VPADDW", "VPAND",
    "VPAVGB", "VPAVGW", "VPCMPEQB", "VPCMPEQD", "VPCMPEQW", "VPMADDWD", "VPMAXSW", "VPMAXUB",
    "VPMINSW", "VPMINUB", "VPMULHUW", "VPMULHW", "VPMULLW", "VPMULUDQ", "VPOR", "VPSADBW", "VPXOR",
    "VXORPD", "VXORPS",
}

# Not encodable by SPAsm for now (no MMX/opmask registers, no EVEX/XOP encoding)
SKIPPED_ISA_EXTENSIONS = {"3dnow!", "3dnow!+", "XOP", "FMA4", "TBM"}

# Xeon Phi only, removed from LLVM 19 and GCC 15 (and llvm-mc 18 cannot parse the AVX512PF prefetches)
SKIPPED_ISA_EXTENSIONS |= {"AVX512ER", "AVX512PF"}

LEGACY_PREFIX_FLAGS = {
    0x66: "F_P66",
    0xF2: "F_PF2",
    0xF3: "F_PF3",
}

CPU_FLAGS = {
    "CMOV", "MMX", "SSE", "SSE2", "SSE3", "SSSE3", "SSE4_1", "SSE4_2", "POPCNT",
    "AVX", "AVX2", "BMI1", "BMI2", "F16C", "FMA", "LZCNT", "MOVBE",
    "AVX512F", "AVX512BW", "AVX512CD", "AVX512DQ", "AVX512VL", "AVX512IFMA", "AVX512VBMI",
    "AVX512VPOPCNTDQ",
}

CPU_FLAG_ALIASES = {
    "SSE4.1": "SSE4_1",
    "SSE4.2": "SSE4_2",
    "FMA3": "FMA",
    "BMI": "BMI1",
}

# Must match Spasm_x86_64_OperandRole in include/spasm/x86_64.h
ROLE_NONE = "R_NONE"
ROLE_MODRM_REG = "R_REG"
ROLE_MODRM_RM = "R_RM"
ROLE_VVVV = "R_VVVV"
ROLE_OPCODE = "R_OPC"
ROLE_IMM = "R_IMM"
ROLE_IS4 = "R_IS4"
ROLE_REL = "R_REL"

MODRM_NONE = "0xFF"
MODRM_REG = "0x08"

@dataclass
class Form:
    mnemonic: str
    operand_types: List[str]
    kinds: List[str]
    roles: List[str]
    opcode: List[int] = field(default_factory=list)
    modrm: str = MODRM_NONE
    flags: List[str] = field(default_factory=list)
    vex_mmmmm: int = 0
    vex_pp: int = 0
    vex_commutable: int = 0
    vector_length: int = 0
    evex_flags: List[str] = field(default_factory=list)
    disp8_shift: int = 0
    cpu_flag: str = "BASE"

def map_cpu_flag(isa_extensions: List[x86_64.ISAExtension]) -> str:
    names = [CPU_FLAG_ALIASES.get(isa.name, isa.name.upper()) for isa in isa_extensions]
    names = [name for name in names if name in CPU_FLAGS]

    # AVX512VL only says the 128/256-bit forms exist, the extension (F, BW, DQ...) is more useful
    specific = [name for name in names if name != "AVX512VL"]

    if len(specific) > 0:
        return specific[0]

    return names[0] if len(names) > 0 else "BASE"

def split_operand_type(operand_type: str) -> tuple:
    """
    AVX-512 operand types carry modifiers: xmm{k}{z} (opmask, zeroing), m512/m32bcst (broadcast of
    32-bit elements). Returns (base type, opmask, zeroing, broadcast element bits)
    """

    mask = "{k}" in operand_type
    zeroing = "{z}" in operand_type
    base = operand_type.replace("{k}", "").replace("{z}", "")
    broadcast = 0

    if "bcst" in base:
        base, broadcast_type = base.split("/")
        broadcast = int(broadcast_type[1:].replace("bcst", ""))

    return base, mask, zeroing, broadcast

def is_imm_sign_extended(instruction_name: str, operand_types: List[str]) -> bool:
    if instruction_name in NON_SEXT_IMM_INSTRUCTIONS:
        return False

    if any(t.startswith("xmm") or t.startswith("ymm") for t in operand_types):
        return False

    imm_widths = [int(t[3:]) for t in operand_types if t in ("imm8", "imm16", "imm32")]

    if len(imm_widths) != 1:
        return False

    # push imm8/imm32 pushes a sign-extended 64-bit value
    if instruction_name == "PUSH":
        return True

    dest_width = OPERAND_WIDTHS.get(operand_types[0])

    return dest_width is not None and imm_widths[0] < dest_width

def parse_encoding(instruction: x86_64.Instruction,
                   form: x86_64.InstructionForm,
                   encoding: x86_64.Encoding) -> Optional[Form]:
    rounding_flags = [ROUNDING_OPERANDS[op.type] for op in form.operands if op.type in ROUNDING_OPERANDS]
    operands = [op for op in form.operands if op.type not in ROUNDING_OPERANDS]
    full_operand_types = [op.type for op in operands]
    split_types = [split_operand_type(t) for t in full_operand_types]
    operand_types = [base for base, _, _, _ in split_types]

    if any(t not in OPERAND_KINDS for t in operand_types):
        return None

    if len(operand_types) > 4:
        return None

    result = Form(mnemonic=instruction.name.lower(),
                  operand_types=full_operand_types,
                  kinds=[OPERAND_KINDS[t] for t in operand_types],
                  roles=[ROLE_NONE] * len(operand_types))

    result.evex_flags.extend(rounding_flags)

    for i, (base, mask, zeroing, broadcast) in enumerate(split_types):
        # Opmask and zeroing always apply to the destination
        if (mask or zeroing) and i != 0:
            return None

        if mask:
            result.evex_flags.append("E_MASK")

            # Gathers and scatters need a mask (it tracks the elements done)
            if any(t.startswith("vm") for t, _, _, _ in split_types):
                result.evex_flags.append("E_MASKREQ")

        if zeroing:
            result.evex_flags.append("E_ZEROING")

        # The element size is given by EVEX.W (64-bit elements when set)
        if broadcast != 0:
            result.evex_flags.append("E_BCST")

    def set_role(operand: x86_64.Operand, role: str) -> bool:
        index = next(i for i, op in enumerate(operands) if op is operand)

        if result.roles[index] != ROLE_NONE and result.roles[index] != role:
            return False

        result.roles[index] = role

        return True

    for component in encoding.components:
        if isinstance(component, x86_64.Prefix):
            if component.byte not in LEGACY_PREFIX_FLAGS:
                return None

            result.flags.append(LEGACY_PREFIX_FLAGS[component.byte])
        elif isinstance(component, x86_64.REX):
            if component.W == 1:
                result.flags.append("F_W")
        elif isinstance(component, x86_64.VEX):
            if component.type != "VEX":
                return None

            result.flags.append("F_VEX")

            if component.W == 1:
                result.flags.append("F_W")

            result.vector_length = 1 if component.L == 1 else 0

            result.vex_mmmmm = component.mmmmm
            result.vex_pp = component.pp
            result.vex_commutable = 1 if instruction.name in COMMUTABLE_VEX_INSTRUCTIONS else 0

            if isinstance(component.vvvv, x86_64.Operand) and not set_role(component.vvvv, ROLE_VVVV):
                return None
        elif isinstance(component, x86_64.EVEX):
            result.flags.append("F_EVEX")

            if component.W == 1:
                result.flags.append("F_W")

            # With {er}, L'L holds the rounding mode set by the encoder, the vector length is the
            # one of the form without rounding
            if isinstance(component.LL, int):
                result.vector_length = component.LL
            else:
                result.vector_length = 2 if "zmm" in operand_types else 1 if "ymm" in operand_types else 0
            result.vex_mmmmm = component.mm
            result.vex_pp = component.pp

            if isinstance(component.disp8xN, int):
                result.disp8_shift = component.disp8xN.bit_length() - 1

            if isinstance(component.vvvv, x86_64.Operand) and not set_role(component.vvvv, ROLE_VVVV):
                return None
        elif isinstance(component, x86_64.Opcode):
            result.opcode.append(component.byte)

            if isinstance(component.addend, x86_64.Operand) and not set_role(component.addend, ROLE_OPCODE):
                return None
        elif isinstance(component, x86_64.ModRM):
            if isinstance(component.reg, int):
                result.modrm = str(component.reg)
            else:
                result.modrm = MODRM_REG

                if not set_role(component.reg, ROLE_MODRM_REG):
                    return None

            if not set_role(component.rm, ROLE_MODRM_RM):
                return None
        elif isinstance(component, x86_64.RegisterByte):
            if component.payload is not None or not set_role(component.register, ROLE_IS4):
                return None
        elif isinstance(component, x86_64.Immediate):
            if not isinstance(component.value, x86_64.Operand) or not set_role(component.value, ROLE_IMM):
                return None
        elif isinstance(component, x86_64.CodeOffset):
            if not set_role(component.value, ROLE_REL):
                return None
        else:
            # DataOffset (moffs)
            return None

    for operand_type, role in zip(operand_types, result.roles):
        if role == ROLE_NONE and operand_type not in IMPLICIT_OPERANDS:
            print(f"Warning: operand {operand_type} of {instruction.name} is not encoded, skipping")
            return None

    if len(result.opcode) == 0 or len(result.opcode) > 3:
        return None

    if len(result.evex_flags) > 0 and "F_EVEX" not in result.flags:
        print(f"Warning: {instruction.name} has AVX-512 operand modifiers without EVEX, skipping")
        return None

    if "F_VEX" not in result.flags and "F_EVEX" not in result.flags and \
       is_imm_sign_extended(instruction.name, operand_types):
        result.flags.append("F_IMMSEXT")

    result.cpu_flag = map_cpu_flag(form.isa_extensions)

    return result

def fix_opcodes_data(form: Form) -> None:
    """Errors of the Opcodes AVX-512 data, found with the llvm-mc differential test"""

    # vmovntps has no mandatory prefix, Opcodes gives pp = 66 for the 128/256-bit EVEX forms
    if form.mnemonic == "vmovntps" and "F_EVEX" in form.flags:
        form.vex_pp = 0

    # vsqrtpd broadcasts 64-bit elements (EVEX.W1), Opcodes gives m32bcst for the 128/256-bit forms
    if form.mnemonic == "vsqrtpd":
        form.operand_types = [t.replace("m32bcst", "m64bcst") for t in form.operand_types]

def merge_rounding_forms(forms: List[Form]) -> List[Form]:
    """
    Opcodes lists the {er}/{sae} variants as separate forms. They have the same encoding as the
    form without rounding (only EVEX.b and L'L change), so their flag goes on that form. When the
    form without rounding is missing from the data (vaddss xmm{k}{z}, xmm, xmm), the rounding form
    is kept for both
    """

    def key(form: Form) -> tuple:
        flags = [f for f in form.evex_flags if f not in ROUNDING_OPERANDS.values()]
        return (tuple(form.kinds), tuple(form.roles), tuple(form.opcode), form.modrm, tuple(form.flags),
                form.vex_mmmmm, form.vex_pp, tuple(flags))

    plain_forms = dict((key(f), f) for f in forms if not any(e in ROUNDING_OPERANDS.values() for e in f.evex_flags))
    merged = list()

    for form in forms:
        rounding = [e for e in form.evex_flags if e in ROUNDING_OPERANDS.values()]

        if len(rounding) == 0 or key(form) not in plain_forms:
            merged.append(form)
            continue

        plain = plain_forms[key(form)]
        plain.evex_flags.extend(e for e in rounding if e not in plain.evex_flags)

    return merged

def add_missing_evex_forms(forms: List[Form]) -> List[Form]:
    """Forms missing from the Opcodes AVX-512 data: the 128-bit EVEX forms of vbroadcastss"""

    added = list()

    for form in forms:
        if form.mnemonic == "vbroadcastss" and "F_EVEX" in form.flags and form.kinds[0] == "K_YMM":
            xmm = copy.deepcopy(form)
            xmm.kinds[0] = "K_XMM"
            xmm.operand_types[0] = xmm.operand_types[0].replace("ymm", "xmm")
            xmm.vector_length = 0
            added.append(xmm)

    return forms + added

def evex_encoding_order(form: Form) -> tuple:
    if "F_EVEX" not in form.flags:
        return (0, 0)

    is_sse2_movq = form.mnemonic == "vmovq" and ((form.opcode == [0x7E] and form.vex_pp == 2) or form.opcode == [0xD6])

    return (form.vex_mmmmm, 0 if is_sse2_movq else 1)

def get_forms() -> List[Form]:
    """
    The encoder keeps the shortest encoding and the first one on ties, so the order of the forms
    of an instruction is the tie-break. It follows llvm-mc:
     - the short al/ax/eax/rax forms come last (add ax, 5 is 66 83 /0 ib rather than 66 05 iw)
     - xchg r, r puts the first operand in ModRM.reg
     - EVEX encodings of a form: the 0F map first (vpextrw uses 0F C5 rather than 0F3A 15), and
       vmovq uses the SSE2 movq opcodes (F3 0F 7E, 66 0F D6) rather than the W1 66 0F 6E/7E
    """

    forms = list()

    for instruction in x86_64.read_instruction_set():
        instruction_forms = list()

        for form in instruction.forms:
            if any(isa.name in SKIPPED_ISA_EXTENSIONS for isa in form.isa_extensions):
                continue

            encodings = form.encodings

            if instruction.name == "XCHG" and all(op.is_register for op in form.operands):
                encodings = list(reversed(encodings))

            form_encodings = list()

            for encoding in encodings:
                parsed = parse_encoding(instruction, form, encoding)

                if parsed is not None:
                    fix_opcodes_data(parsed)
                    form_encodings.append(parsed)

            form_encodings.sort(key=evex_encoding_order)
            instruction_forms.extend(form_encodings)

        instruction_forms = add_missing_evex_forms(merge_rounding_forms(instruction_forms))

        instruction_forms.sort(key=lambda f: len(f.operand_types) > 0 and f.operand_types[0] in ("al", "ax", "eax", "rax"))

        forms.extend(instruction_forms)

    return forms

def format_form(form: Form) -> str:
    kinds = form.kinds + ["K_NONE"] * (4 - len(form.kinds))
    roles = form.roles + [ROLE_NONE] * (4 - len(form.roles))
    opcode = ", ".join(f"0x{b:02X}" for b in form.opcode)
    flags = " | ".join(form.flags) if len(form.flags) > 0 else "0"
    evex_flags = " | ".join(form.evex_flags) if len(form.evex_flags) > 0 else "0"
    operand_types = list(form.operand_types)
    rounding = [t for t, e in ROUNDING_OPERANDS.items() if e in form.evex_flags]

    if len(rounding) > 0:
        imm_index = next((i for i, k in enumerate(form.kinds) if k.startswith("K_IMM")), len(form.kinds))
        operand_types.insert(imm_index, rounding[0])

    comment = f"{form.mnemonic} {', '.join(operand_types)}".strip()

    return (f"    {{ {{ {', '.join(kinds)} }}, ROLES({', '.join(roles)}), {{ {opcode} }}, {len(form.opcode)}, "
            f"{form.modrm}, {flags}, VEX({form.vex_mmmmm}, {form.vex_pp}, {form.vex_commutable}), "
            f"CPU({form.cpu_flag}), EVEX({form.vector_length}, {evex_flags}), {form.disp8_shift} }}, "
            f"/* {comment} */\n")

def generate_c_file(output_c_file_path: str) -> bool:
    forms = get_forms()

    if len(forms) >= 0xFFFF:
        print("Error: too many forms, Spasm_x86_64_MnemonicKeyword ranges are 16 bits")
        return False

    output_dir = os.path.dirname(output_c_file_path)

    if output_dir != "" and not os.path.exists(output_dir):
        os.makedirs(output_dir)

    with open(output_c_file_path, "w", encoding="utf-8") as f:
        f.write("/* SPDX-License-Identifier: BSD-3-Clause */\n")
        f.write("/* Copyright (c) 2025 - Present Romain Augier */\n")
        f.write("/* All rights reserved. */\n")
        f.write("\n")
        f.write("/* Auto-generated file by generate.py, don't modify it */\n")
        f.write("\n")
        f.write("#include \"spasm/x86_64.h\"\n")
        f.write("\n")
        f.write("#define ROLES(a, b, c, d) ((uint16_t)((a) | ((b) << 3) | ((c) << 6) | ((d) << 9)))\n")
        f.write("#define VEX(mmmmm, pp, flags) ((uint8_t)((mmmmm) | ((pp) << 5) | ((flags) << 7)))\n")
        f.write("#define CPU(flag) Spasm_x86_64_CPUFlag_##flag\n")
        f.write("#define EVEX(vector_length, flags) ((uint8_t)((vector_length) | (flags)))\n")
        f.write("\n")

        for kind in ["NONE"] + sorted(set(k[2:] for k in OPERAND_KINDS.values())):
            f.write(f"#define K_{kind} Spasm_x86_64_OperandKind_{kind}\n")

        f.write("\n")

        for role, name in ((ROLE_NONE, "None"), (ROLE_MODRM_REG, "ModRMReg"), (ROLE_MODRM_RM, "ModRMRm"),
                           (ROLE_VVVV, "Vvvv"), (ROLE_OPCODE, "OpcodeReg"), (ROLE_IMM, "Imm"),
                           (ROLE_IS4, "Is4"), (ROLE_REL, "Rel")):
            f.write(f"#define {role} Spasm_x86_64_OperandRole_{name}\n")

        f.write("\n")

        for flag in ("P66", "PF2", "PF3", "W", "VEX", "EVEX", "IMMSEXT"):
            f.write(f"#define F_{flag} Spasm_x86_64_FormFlag_{flag}\n")

        f.write("\n")

        for flag in ("MASK", "ZEROING", "MASKREQ", "BCST", "ER", "SAE"):
            f.write(f"#define E_{flag} Spasm_x86_64_EvexFlag_{flag}\n")

        f.write("\n")
        f.write(f"const Spasm_x86_64_Form spasm_x86_64_forms[{len(forms)}] = {{\n")

        for form in forms:
            f.write(format_form(form))

        f.write("};\n")
        f.write("\n")
        f.write(f"const size_t spasm_x86_64_forms_count = {len(forms)};\n")

    return generate_mnemonics_gperf(forms)

def generate_mnemonics_gperf(forms: List[Form]) -> bool:
    # The table is grouped by mnemonic, map each mnemonic to its range of forms
    ranges: Dict[str, tuple] = dict()

    for i, form in enumerate(forms):
        first, count = ranges.get(form.mnemonic, (i, 0))

        if first + count != i:
            print(f"Error: forms of \"{form.mnemonic}\" are not contiguous in the table")
            return False

        ranges[form.mnemonic] = (first, count + 1)

    gperf_file_path = os.path.join(SCRIPT_DIR, MNEMONICS_GPERF_FILE)

    with open(gperf_file_path, "w", encoding="utf-8") as f:
        f.write("%{\n")
        f.write("/* SPDX-License-Identifier: BSD-3-Clause */\n")
        f.write("/* Copyright (c) 2025 - Present Romain Augier */\n")
        f.write("/* All rights reserved. */\n")
        f.write("\n")
        f.write("/* Auto-generated file by generate.py, don't modify it */\n")
        f.write("\n")
        f.write("#include \"spasm/x86_64.h\"\n")
        f.write("\n")
        f.write("#include <string.h>\n")
        f.write("%}\n")
        f.write("%language=ANSI-C\n")
        f.write("%struct-type\n")
        f.write("%omit-struct-type\n")
        f.write("%readonly-tables\n")
        f.write("%global-table\n")
        f.write("%pic\n")
        f.write("%ignore-case\n")
        f.write("%compare-strncmp\n")
        f.write("%define hash-function-name spasm_x86_64_mnemonic_hash\n")
        f.write("%define lookup-function-name spasm_x86_64_mnemonic_lookup\n")
        f.write("%define string-pool-name spasm_x86_64_mnemonic_strings\n")
        f.write("%define word-array-name spasm_x86_64_mnemonic_words\n")
        f.write("%define constants-prefix SPASM_X86_64_MNEMONIC_\n")
        f.write("struct Spasm_x86_64_MnemonicKeyword;\n")
        f.write("%%\n")

        for mnemonic, (first, count) in ranges.items():
            f.write(f"{mnemonic}, {first}, {count}\n")

        f.write("%%\n")
        f.write("size_t spasm_x86_64_mnemonics_count(void)\n")
        f.write("{\n")
        f.write("    return SPASM_X86_64_MNEMONIC_TOTAL_KEYWORDS;\n")
        f.write("}\n")
        f.write("\n")
        f.write("const Spasm_x86_64_MnemonicKeyword* spasm_x86_64_mnemonic_at(size_t i, const char** name)\n")
        f.write("{\n")
        f.write("    const Spasm_x86_64_MnemonicKeyword* keyword = &spasm_x86_64_mnemonic_words[i];\n")
        f.write("\n")
        f.write("    *name = spasm_x86_64_mnemonic_strings + keyword->name;\n")
        f.write("\n")
        f.write("    return keyword;\n")
        f.write("}\n")

    return run_gperf(MNEMONICS_GPERF_FILE)

def run_gperf(gperf_file_name: str) -> bool:
    output_c_file_name = os.path.splitext(gperf_file_name)[0] + ".c"

    cmd = ["gperf"] + GPERF_FILES[gperf_file_name] + [f"--output-file={output_c_file_name}", gperf_file_name]

    # Run from the script directory so the generated header only holds relative paths
    try:
        subprocess.run(cmd, check=True, cwd=SCRIPT_DIR, capture_output=True, text=True)
    except OSError as err:
        print(f"Error: cannot run gperf: {err}")
        return False
    except subprocess.CalledProcessError as err:
        print(f"Error: gperf failed on {gperf_file_name}:\n{err.stderr}")
        return False

    return True

def run_all_gperf() -> bool:
    return all(run_gperf(f) for f in GPERF_FILES)

def main() -> int:
    parser = optparse.OptionParser()
    parser.add_option("-o", "--output", dest="output_c_file", default=None)
    parser.add_option("--gperf-only", dest="gperf_only", action="store_true", default=False)

    options, _ = parser.parse_args()

    if options.gperf_only:
        return 0 if run_all_gperf() else 1

    if options.output_c_file is None:
        print("Error: you need to specify the output c file path using -o/--output option")
        return 1

    if os.path.dirname(options.output_c_file) == "":
        options.output_c_file = os.path.join(SCRIPT_DIR, options.output_c_file)

    if not generate_c_file(options.output_c_file):
        print("Error during generation of the output c file, check the log for more details")
        return 1

    return 0

if __name__ == "__main__":
    sys.exit(main())

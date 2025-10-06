#!/usr/bin/python3

# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

# relies on https://github.com/Maratyszcza/Opcodes
# pip install Opcodes

import sys
import os
import optparse
from typing import List, Tuple, Optional, Any
from opcodes import x86_64

def map_operand_type(opcode_operand: x86_64.Operand) -> str:
    if not opcode_operand:
        return "OP_NONE"
    
    if opcode_operand.type == 'k':
        return "OP_REG"
    elif opcode_operand.is_register:
        return "OP_REG"
    elif opcode_operand.is_memory:
        return "OP_MEM"
    elif opcode_operand.is_immediate:
        if opcode_operand.type == "imm4":
            return f"OP_IMM8"

        return f"OP_{opcode_operand.type.upper()}"
    else:
        return "OP_NONE"

def parse_operand_types(operands: List[x86_64.Operand]) -> List[str]:
    res = [map_operand_type(op) for op in operands]
    return res + ["OP_NONE"] * (4 - len(res))

def parse_operand_sizes(operands: List[x86_64.Operand]) -> List[str]:
    res = list()

    for op in operands:
        if not op:
            continue
        if op.type in ['r8', 'imm8']:
            res.append("8")
        elif op.type in ['r16', 'imm16']:
            res.append("16")
        elif op.type in ['r32', 'imm32']:
            res.append("32")
        elif op.type in ['r64', 'imm64']:
            res.append("64")
        elif op.type.startswith("xmm"):
            res.append("128")
        elif op.type.startswith("ymm"):
            res.append("256")
        elif op.type.startswith("zmm"):
            res.append("512")
        elif op.type.startswith('m'):
            res.append("0")
        else:
            res.append("0")

    return res + ["0"] * (4 - len(res))

def parse_opcode(opcode: str) -> Tuple[List[str], bool]:
    b = list()

    needs_modrm = False

    for part in opcode.split():
        if part == "/r" or part.startswith("/"):
            needs_modrm = True
            b.append("0x00")  # Placeholder for ModR/M byte
        elif part.startswith("+r"):
            b.append("0x00")  # Placeholder for opcode + register encoding
        elif part in ["ib", "iw", "id", "iz"]:
            b.append("0x00")  # Placeholder for immediate operands
        else:
            # Assume part is a hex byte (e.g., "0F", "66")
            b.append(f"0x{part.lower()}")

    return b, needs_modrm

def has_prefix(t: Any, l: List[Any]) -> bool:
    return any([isinstance(x, t) for x in l])

def parse_encoding(encoding: x86_64.Encoding) -> Tuple[List[str], bool, str, str]:
    # Returns: opcode, needs_modrm, prefix_type, pp

    opcode = list()

    for component in encoding.components:
        if isinstance(component, x86_64.Opcode):
            opcode.append("0x" + f"{component.byte:02X}")

    needs_modrm = has_prefix(x86_64.ModRM, encoding.components)

    prefix = "Spasm_x86_64_PrefixType_NONE"
    pp = "0x00"

    if has_prefix(x86_64.VEX, encoding.components):
        prefix = "Spasm_x86_64_PrefixType_VEX2"
        pp = "0x01"
    elif has_prefix(x86_64.EVEX, encoding.components):
        prefix = "Spasm_x86_64_PrefixType_EVEX"
        pp = "0x01"
    elif has_prefix(x86_64.REX, encoding.components):
        prefix = "Spasm_x86_64_PrefixType_REX"

    return opcode, needs_modrm, prefix, pp

cpu_flag_map = {
    "BASE",
    "CMOV",
    "CX8",
    "FPU",
    "FXSR",
    "MMX",
    "OSFXSR",
    "SCE",
    "SSE",
    "SSE2",
    "CX16",
    "LAHFSAHF",
    "POPCNT",
    "SSE3",
    "SSE4_1",
    "SSE4_2",
    "SSSE3",
    "AVX",
    "AVX2",
    "BMI1",
    "BMI2",
    "F16C",
    "FMA",
    "LZCNT",
    "MOVBE",
    "OSXSAVE",
    "AVX512F",
    "AVX512BW",
    "AVX512CD",
    "AVX512DQ",
    "AVX512VL",
}

def map_cpu_flag(isa: List[x86_64.ISAExtension]) -> str:
    if len(isa) == 0:
        return "Spasm_x86_64_CPUFlag_BASE"

    isa = isa[0].name.upper()

    if not isa in cpu_flag_map:
        return "Spasm_x86_64_CPUFlag_BASE"

    return f"Spasm_x86_64_CPUFlag_{isa}"

def get_x86_64_instructions() -> List[x86_64.Instruction]:
    return x86_64.read_instruction_set()

def generate_c_file(output_c_file_path: str) -> bool:
    # TODO: handle multiple encodings

    instructions = []

    for instruction in get_x86_64_instructions():
        for form in instruction.forms:
            operands = form.operands

            if len(operands) > 4:
                print(f"Skipping instruction \"{instruction.name}\", it has more than 4 operands")
                continue

            encoding = form.encodings[0]

            isa = form.isa_extensions

            operand_types = parse_operand_types(operands)
            operand_sizes = parse_operand_sizes(operands)
            opcode_bytes, needs_modrm, prefix_type, pp = parse_encoding(encoding)
            mmmmm = "0x01" if 'VEX' in prefix_type or 'EVEX' in prefix_type else "0x00"
            cpu_flag = map_cpu_flag(isa)

            instructions.append({
                "mnemonic": instruction.name.lower(),  # Opcodes uses uppercase, normalize to lowercase
                "operand_types": operand_types,
                "operand_sizes": operand_sizes,
                "opcode": opcode_bytes,
                "needs_modrm": needs_modrm,
                "prefix": prefix_type,
                "pp": pp,
                "mmmmm": mmmmm,
                "cpu_flag": cpu_flag,
            })

    # Create output directory if it doesn’t exist
    if not os.path.exists(os.path.dirname(output_c_file_path)):
        os.makedirs(os.path.dirname(output_c_file_path))

    num_instructions = len(instructions)

    # Write the C file
    with open(output_c_file_path, "w", encoding="utf-8") as f:
        f.write("/* SPDX-License-Identifier: BSD-3-Clause */\n")
        f.write("/* Copyright (c) 2025 - Present Romain Augier */\n")
        f.write("/* All rights reserved. */\n")
        f.write("\n")
        f.write("/* Auto-generated file, don't modify it */\n")
        f.write("\n")
        f.write("#include \"spasm/x86_64.h\"\n")
        f.write("\n")
        f.write("#define OP_NONE SpasmOperandType_None\n")
        f.write("#define OP_REG SpasmOperandType_Register\n")
        f.write("#define OP_MEM SpasmOperandType_Mem\n")
        f.write("#define OP_IMM8 SpasmOperandType_Imm8\n")
        f.write("#define OP_IMM16 SpasmOperandType_Imm16\n")
        f.write("#define OP_IMM32 SpasmOperandType_Imm32\n")
        f.write("#define OP_IMM64 SpasmOperandType_Imm64\n")
        f.write("\n")
        f.write(f"const Spasm_x86_64_InstructionInfo spasm_x86_64_instruction_table[{num_instructions}] = {{\n")

        for instruction in instructions:
            f.write("    {\n")
            f.write(f"        .mnemonic = \"{instruction['mnemonic']}\",\n")
            f.write(f"        .mnemonic_len = {len(instruction['mnemonic'])},\n")
            f.write(f"        .operand_types = {{ {', '.join(instruction['operand_types'])} }},\n")
            f.write(f"        .operand_sizes = {{ {', '.join(instruction['operand_sizes'])} }},\n")
            f.write(f"        .opcode = {{ {', '.join(instruction['opcode'])} }},\n")
            f.write(f"        .opcode_len = {len(instruction['opcode'])},\n")
            f.write(f"        .needs_modrm = {str(instruction['needs_modrm']).lower()},\n")
            f.write(f"        .prefix = {instruction['prefix']},\n")
            f.write(f"        .pp = {instruction['pp']},\n")
            f.write(f"        .mmmmm = {instruction['mmmmm']},\n")
            f.write(f"        .cpu_flag = {instruction['cpu_flag']}\n")
            f.write("    },\n")

        f.write("};\n")
        f.write("\n")
        f.write(f"const size_t spasm_x86_64_instruction_table_size = {num_instructions};\n")

    return True

def main() -> int:
    parser = optparse.OptionParser()
    parser.add_option("-o", "--output", dest="output_c_file", default=None)

    options, _ = parser.parse_args()

    if options.output_c_file is None:
        print("Error: you need to specify the output c file path using -o/--output option")
        return 1

    if os.path.dirname(options.output_c_file) == "":
        options.output_c_file = os.path.dirname(__file__) + "/" + options.output_c_file

    if not generate_c_file(options.output_c_file):
        print("Error during generation of the output c file, check the log for more details")
        return 1

    return 0

if __name__ == "__main__":
    sys.exit(main())
#!/usr/bin/python3

# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

import sys
import os
import optparse

from typing import List, Tuple

def parse_operand_types(s: str) -> List[str]:
    ops = s.split(',')
    res = list()

    for op in ops:
        if len(op) == 0:
            continue

        if '|' in op:
            res.append(f"SpasmOperandType_{op.split('|')[0].capitalize()}")
        else:
            res.append(f"SpasmOperandType_{op.strip().capitalize()}")

    return res + ["SpasmOperandType_None"] * (4 - len(res))

def parse_operand_sizes(s: str) -> List[str]:
    sizes = s.split(',')
    res = list()

    for size in sizes:
        if len(size) == 0:
            continue

        if '|' in size:
            res.append(size.split('|')[0])
        else:
            res.append(size.strip())

    return res + ["0"] * (4 - len(res))

def parse_opcode(s: str) -> Tuple[str, bool]:
    b = []
    needs_modrm = False

    for part in s.split():
        if part == "/r":
            needs_modrm = True
        elif part.startswith("/"):
            needs_modrm = True
            b.append(f"0x00")  # Placeholder, ModR/M handles /r or /0
        elif part.startswith("+r"):
            b.append("0x00")
        elif part in ["ib", "iw", "id", "iz"]:
            b.append("0x00")  # Placeholder for immediates
        else:
            b.append(f"0x{part}")

    return b, needs_modrm

def parse_prefix(s: str) -> Tuple[str, str]:
    if s.startswith("VEX.128"):
        return "Spasm_x86_64_PrefixType_VEX2", "0x01"
    elif s.startswith("VEX.256"):
        return "Spasm_x86_64_PrefixType_VEX2", "0x01"
    elif s.startswith("VEX"):
        return "Spasm_x86_64_PrefixType_VEX3", "0x01"
    elif s.startswith("EVEX"):
        return "Spasm_x86_64_PrefixType_EVEX", "0x01"
    elif s == "REX":
        return "Spasm_x86_64_PrefixType_REX", "0x00"

    return "Spasm_x86_64_PrefixType_NONE", "0x00"

def generate_c_file(instructions_file_path: str,
                    output_c_file_path: str) -> bool:
    instructions = list()

    if not os.path.exists(instructions_file_path):
        print(f"Error: cannot find instructions file: \"{instructions_file_path}\"")
        return False

    with open(instructions_file_path, "r", encoding="utf-8") as f:
        for i, line in enumerate(f.readlines()):
            line = line.strip()

            if line.startswith('#') or line is None or len(line) == 0:
                continue

            try:
                mnemonic, operands, sizes, opcode, prefix, pp, mmmmm, flag = line.split(';')
            except:
                print(f"Error: invalid line \"{line}\" ({i})")
                continue

            operands = parse_operand_types(operands)
            sizes = parse_operand_sizes(sizes)
            opcode_bytes, needs_modrm = parse_opcode(opcode)
            prefix_type, pp = parse_prefix(prefix)

            instructions.append({
                "mnemonic": mnemonic,
                "operand_types": operands,
                "operand_sizes": sizes,
                "opcode": opcode_bytes,
                "needs_modrm": needs_modrm,
                "prefix": prefix_type,
                "pp": pp,
                "mmmmm": mmmmm.strip(),
                "cpu_flag": f"Spasm_x86_64_CPUFlag_{flag}",
            })
    
    if not os.path.exists(os.path.dirname(output_c_file_path)):
        os.makedirs(os.path.dirname(output_c_file_path))

    num_instructions = len(instructions)

    with open(output_c_file_path, "w", encoding="utf-8") as f:
        f.write("/* SPDX-License-Identifier: BSD-3-Clause */\n")
        f.write("/* Copyright (c) 2025 - Present Romain Augier */\n")
        f.write("/* All rights reserved. */\n")
        f.write("\n")
        f.write("#include \"spasm/x86_64.h\"\n")
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
    instructions_file = os.path.dirname(__file__) + "/x86_64.instructions"

    parser = optparse.OptionParser()
    parser.add_option("-o", "--output", dest="output_c_file", default=None)

    options, _ = parser.parse_args()

    if options.output_c_file is None:
        print("Error: you need to specify the output c file path using -o/--output option")
        return 1

    if os.path.dirname(options.output_c_file) == "":
        options.output_c_file = os.path.dirname(__file__) + "/" + options.output_c_file

    if not generate_c_file(instructions_file, options.output_c_file):
        print("Error during generation of the output c file, check the log for more details")
        return 1

    return 0

if __name__ == "__main__":
    sys.exit(main())
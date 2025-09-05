#!/usr/bin/env python3

# pip install requests BeautifulSoup4 lxml

import requests
import re
import sys

from bs4 import BeautifulSoup
from typing import List, Tuple, Dict, Optional

operand_type_map = {
    "r8": "REGISTER", "r16": "REGISTER", "r32": "REGISTER", "r64": "REGISTER",
    "m": "MEM", "m8": "MEM", "m16": "MEM", "m32": "MEM", "m64": "MEM",
    "imm8": "IMM8", "imm16": "IMM16", "imm32": "IMM32", "imm64": "IMM64",
    "xmm": "SCALAR", "ymm": "VECTOR", "zmm": "VECTOR",
    "k": "OPMASK", "m128": "MEM", "m256": "MEM", "m512": "MEM"
}

operand_size_map = {
    "r8": 8, "r16": 16, "r32": 32, "r64": 64,
    "m8": 8, "m16": 16, "m32": 32, "m64": 64,
    "imm8": 8, "imm16": 16, "imm32": 32, "imm64": 64,
    "xmm": 128, "ymm": 256, "zmm": 512, "m128": 128, "m256": 256, "m512": 512,
    "k": 0
}

prefix_map = {
    "VEX.128": "VEX2", "VEX.256": "VEX2", "VEX": "VEX3", "EVEX": "EVEX", "": "NONE", "REX.W": "REX"
}

pp_map = {
    "": "00", "66": "01", "F3": "10", "F2": "11"
}

mmmmm_map = {
    "0F": "01", "0F 38": "10", "0F 3A": "11", "": "00"
}

cpu_flag_map = {
    "": "BASE", "SSE": "SSE", "SSE2": "SSE2", "SSE3": "SSE3", "SSSE3": "SSSE3",
    "SSE4.1": "SSE4_1", "SSE4.2": "SSE4_2", "AVX": "AVX", "AVX2": "AVX2",
    "AVX512F": "AVX512F", "AVX512BW": "AVX512BW", "AVX512CD": "AVX512CD",
    "AVX512DQ": "AVX512DQ", "AVX512VL": "AVX512VL", "FMA": "FMA", "F16C": "F16C"
}

def parse_operand_types_and_sizes(encoding: str) -> Tuple[List[str], List[str]]:
    operands = encoding.split(',')
    types = list()
    sizes = list()

    for op in operands:
        op = op.strip()

        if '/' in op:
            op = op.split('/')[0]  # Take first option (e.g., r/m64 → r64)

        types.append(operand_type_map.get(op, 'NONE'))
        sizes.append(str(operand_size_map.get(op, 0)))

    types.extend(['NONE'] * (4 - len(types)))
    sizes.extend(['0'] * (4 - len(sizes)))

    return types, sizes

def parse_opcode(opcode: str) -> Tuple[str, bool]:
    # Handle opcodes like "B8+ rd id", "0F 05", "VEX.128.66.0F 58 /r"
    parts = opcode.split(' ')
    opcode_bytes = []
    needs_modrm = False
    for part in parts:
        if part == '/r' or part.startswith('/') or part in ['ib', 'iw', 'id', 'iz']:
            needs_modrm = True
            if part.startswith('/'):
                opcode_bytes.append('0x00')  # Placeholder for ModR/M reg field
            continue
        elif part.startswith('+'):
            opcode_bytes.append('0x00')  # Placeholder for +r
            continue
        elif part in ['ib', 'iw', 'id', 'iz']:
            continue
        opcode_bytes.append(f'0x{part}')

    return opcode_bytes, needs_modrm

def parse_prefix_and_flags(opcode: str, description: str) -> Tuple[str, str, str, str]:
    prefix = ""
    pp = ""
    mmmmm = ""
    flags = "BASE"

    if opcode.startswith("VEX.128"):
        prefix = "VEX2"
        pp = "66" if "66" in opcode else ""
        mmmmm = "0F" if "0F" in opcode else "00"
    elif opcode.startswith("VEX.256"):
        prefix = "VEX2"
        pp = "66" if "66" in opcode else ""
        mmmmm = "0F" if "0F" in opcode else "00"
    elif opcode.startswith("VEX"):
        prefix = "VEX3"
        pp = "66" if "66" in opcode else "F3" if "F3" in opcode else "F2" if "F2" in opcode else ""
        mmmmm = "0F" if "0F" in opcode else "0F 38" if "0F 38" in opcode else "0F 3A" if "0F 3A" in opcode else "00"
    elif opcode.startswith("EVEX"):
        prefix = "EVEX"
        pp = "66" if "66" in opcode else "F3" if "F3" in opcode else "F2" if "F2" in opcode else ""
        mmmmm = "0F" if "0F" in opcode else "0F 38" if "0F 38" in opcode else "0F 3A" if "0F 3A" in opcode else "00"
    elif "REX.W" in opcode:
        prefix = "REX"

    for flag in cpu_flag_map:
        if flag and flag in description:
            flags = cpu_flag_map[flag]
            break

    return prefix, pp_map.get(pp, "00"), mmmmm_map.get(mmmmm, "00"), flags

def parse_instruction(instr: str) -> Tuple[str, List[str], str, List[List[str]]]:
    prefix, rest = instr.split(' ', maxsplit=1)

    if prefix.startswith("NP"):
        prefix = "NONE"
    elif prefix.startswith("REX"):
        prefix = "REX"
    elif prefix.startswith("VEX.128"):
        prefix = "VEX2"
    elif prefix.startswith("VEX.256"):
        prefix = "VEX3"
    elif prefix.startswith("EVEX"):
        prefix = "EVEX"

    opcode = list()

    last, rest = rest.split(' ', maxsplit=1)

    while last != "/r":
        opcode.append(last)
        last, rest = rest.split(' ', maxsplit=1)

    mnemonic = last

    operands = list()

    operands_str = rest.split(",")

    for operand in operands_str:
        if "/" in operand:
            variations = operand.split("/")
            operands.append(variations[0])
        else:
            operands.append(operand)

    return prefix, opcode, mnemonic, [operands]

def scrape_instruction_page(url) -> Optional[List[Dict]]:
    response = requests.get(url)
    soup = BeautifulSoup(response.text, "lxml")
    entries = []

    tables = soup.find_all("table")

    if len(tables) < 2:
        return None

    instruction_table = tables[0]
    operands_table = tables[1]

    instruction_rows = instruction_table.find_all("tr")[1:]
    operands_rows = operands_table.find_all("tr")[1:]

    for row in instruction_rows:
        tds = row.find_all("td")

        if len(tds) == 5:
            opcode_instruction, op_enc, support_mode_32_64, feature_flag, desc = row.find_all("td")
            prefix, opcode, mnemonic, operands = parse_instruction(opcode_instruction)
        elif len(tds) == 6:
            opcode, instruction, op_enc, support_mode_32_64, feature_flag, desc = row.find_all("td")

    sys.exit(0)

    for row in rows:
        cols = row.find_all("td")
        if len(cols) < 4:
            continue

        opcode = cols[0].text.strip()
        mnemonic = cols[1].text.strip().split()[0]
        encoding = cols[2].text.strip()
        description = cols[3].text.strip()

        if "16-bit" in description or "32-bit" in description or "8086" in description:
            continue

        operand_types, operand_sizes = parse_operand_types_and_sizes(encoding)

        opcode_bytes, needs_modrm = parse_opcode(opcode)

        prefix, pp, mmmmm, flags = parse_prefix_and_flags(opcode, description)

        entry = {
            "mnemonic": mnemonic.lower(),
            "operand_types": "|".join([t for t in operand_types if t != "NONE"]),
            "operand_sizes": "|".join([s for s in operand_sizes if s != "0"]),
            "opcode": " ".join(opcode_bytes) if opcode_bytes else "0x00",
            "needs_modrm": str(needs_modrm).lower(),
            "prefix": prefix or "NONE",
            "pp": pp,
            "mmmmm": mmmmm,
            "flags": flags
        }

        entries.append(entry)

    return entries

def scrape_all_instructions() -> None:
    base_url = "https://www.felixcloutier.com/x86/"
    response = requests.get(base_url)
    soup = BeautifulSoup(response.text, "lxml")

    instruction_links = soup.find_all("a", href=re.compile(r"x86"))

    all_entries = list()

    for link in instruction_links:
        instruction_url = base_url + link['href'].replace("/x86/", "")
        print(f"Scraping {instruction_url}...")
        entries = scrape_instruction_page(instruction_url)
        print(f"Found {len(entries)} entries")
        all_entries.extend(entries)

    with open("spasm_insns_x86_64.dat", "w") as f:
        f.write("# SPDX-License-Identifier: BSD-3-Clause\n")
        f.write("# Copyright (c) 2025 - Present Romain Augier\n")
        f.write("# All rights reserved.\n\n")
        f.write("# Format: mnemonic;operand_types;operand_sizes;opcode;prefix;pp;mmmmm;flags\n")
        f.write("# operand_types: NONE,REGISTER,SCALAR,VECTOR,OPMASK,MEM,IMM8,IMM16,IMM32,IMM64\n")
        f.write("# operand_sizes: 8,16,32,64,128,256,512\n")
        f.write("# prefix: NONE,REX,VEX2,VEX3,EVEX\n")
        f.write("# pp: 00=none,01=0x66,10=0xF3,11=0xF2\n")
        f.write("# mmmmm: 01=0x0F,10=0x0F38,11=0x0F3A\n")
        f.write("# flags: BASE,CMOV,CX8,FPU,FXSR,MMX,OSFXSR,SCE,SSE,SSE2,CX16,LAHFSAHF,POPCNT,SSE3,SSE4_1,SSE4_2,SSSE3,AVX,AVX2,BMI1,BMI2,F16C,FMA,LZCNT,MOVBE,OSXSAVE,AVX512F,AVX512BW,AVX512CD,AVX512DQ,AVX512VL\n\n")

        for entry in all_entries:
            f.write(f"{entry['mnemonic']};{entry['operand_types']};{entry['operand_sizes']};{entry['opcode']};{entry['prefix']};{entry['pp']};{entry['mmmmm']};{entry['flags']}\n")

if __name__ == "__main__":
    scrape_all_instructions()
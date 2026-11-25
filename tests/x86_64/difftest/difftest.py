#!/usr/bin/python3

# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

# Differential test of the x86_64 encoder against llvm-mc.
# difftest_dump prints "<intel syntax>\t<SPAsm bytes>" for operands generated for every form of the
# table, llvm-mc assembles the same lines and the bytes must match.
#
# usage: difftest.py --dump <difftest_dump executable> [--llvm-mc <llvm-mc>] [--known <file>] [--verbose]

import sys
import re
import shutil
import optparse
import subprocess
from typing import List, Optional, Tuple, Dict

LLVM_MC_NAMES = ["llvm-mc"] + [f"llvm-mc-{v}" for v in range(30, 13, -1)]

LLVM_MC_ARGS = ["-triple=x86_64-unknown-unknown", "-x86-asm-syntax=intel", "-show-encoding"]

ERROR_LINE_RE = re.compile(r"^<stdin>:(\d+):\d+: error: (.*)$")
ENCODING_RE = re.compile(r"# encoding: \[([^\]]*)\]")

def find_llvm_mc(path: Optional[str]) -> Optional[str]:
    if path is not None:
        return shutil.which(path)

    for name in LLVM_MC_NAMES:
        found = shutil.which(name)

        if found is not None:
            return found

    return None

def run_dump(dump: str) -> List[Tuple[str, str]]:
    result = subprocess.run([dump], check=True, capture_output=True, text=True)

    lines = list()

    for line in result.stdout.splitlines():
        asm, tab, encoding = line.partition("\t")

        # Skip anything else printed on stdout (e.g. by the library)
        if tab == "":
            continue

        lines.append((asm, encoding))

    return lines

def run_llvm_mc(llvm_mc: str, asm_lines: List[str]) -> Tuple[Dict[int, str], Dict[int, str]]:
    """
    Returns (encodings, errors) keyed by the index of the line in asm_lines.
    llvm-mc goes on after an error, so lines that fail are removed and the remaining lines map
    one to one to the printed encodings
    """

    source = "\n".join(asm_lines) + "\n"

    result = subprocess.run([llvm_mc] + LLVM_MC_ARGS, input=source, capture_output=True, text=True)

    errors = dict()

    for line in result.stderr.splitlines():
        match = ERROR_LINE_RE.match(line)

        if match is not None:
            errors[int(match.group(1)) - 1] = match.group(2)

    encodings_text = ENCODING_RE.findall(result.stdout)
    ok_indices = [i for i in range(len(asm_lines)) if i not in errors]

    if len(encodings_text) != len(ok_indices):
        raise RuntimeError(f"llvm-mc printed {len(encodings_text)} encodings for {len(ok_indices)} lines")

    encodings = dict()

    for i, text in zip(ok_indices, encodings_text):
        encodings[i] = "".join(f"{int(b, 16):02x}" for b in text.split(",") if b.strip() != "")

    return encodings, errors

def read_known_differences(path: Optional[str]) -> Dict[str, str]:
    known = dict()

    if path is None:
        return known

    with open(path, "r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()

            if line == "" or line.startswith("#"):
                continue

            asm, _, reason = line.partition("|")
            known[asm.strip()] = reason.strip()

    return known

def main() -> int:
    parser = optparse.OptionParser()
    parser.add_option("--dump", dest="dump", default=None)
    parser.add_option("--llvm-mc", dest="llvm_mc", default=None)
    parser.add_option("--known", dest="known", default=None)
    parser.add_option("--verbose", dest="verbose", action="store_true", default=False)

    options, _ = parser.parse_args()

    if options.dump is None:
        print("Error: --dump <difftest_dump executable> is required")
        return 1

    llvm_mc = find_llvm_mc(options.llvm_mc)

    if llvm_mc is None:
        print("Error: cannot find llvm-mc, pass it with --llvm-mc")
        return 1

    known_differences = read_known_differences(options.known)
    used_known_differences = set()

    lines = run_dump(options.dump)
    asm_lines = [asm for asm, _ in lines]

    encodings, llvm_errors = run_llvm_mc(llvm_mc, asm_lines)

    mismatches = list()
    spasm_errors = list()
    matches = 0

    for i, (asm, spasm_encoding) in enumerate(lines):
        if i in llvm_errors:
            continue

        if spasm_encoding == "ERROR":
            spasm_errors.append((asm, encodings[i]))
        elif spasm_encoding != encodings[i]:
            if asm in known_differences:
                used_known_differences.add(asm)
            else:
                mismatches.append((asm, spasm_encoding, encodings[i]))
        else:
            matches += 1

    for asm, ours, llvm in mismatches:
        print(f"MISMATCH  {asm:<60} spasm={ours} llvm-mc={llvm}")

    for asm, llvm in spasm_errors:
        print(f"NOENCODE  {asm:<60} llvm-mc={llvm}")

    for asm in known_differences:
        if asm not in used_known_differences:
            print(f"WARNING   known difference \"{asm}\" did not occur, remove it from the list")

    if options.verbose:
        for i, error in sorted(llvm_errors.items()):
            print(f"LLVMERROR {asm_lines[i]:<60} {error}")

    print(f"{len(lines)} instructions: {matches} match, {len(mismatches)} mismatch, "
          f"{len(used_known_differences)} known differences, {len(spasm_errors)} not encoded by SPAsm, "
          f"{len(llvm_errors)} rejected by llvm-mc ({llvm_mc})")

    return 0 if len(mismatches) == 0 and len(spasm_errors) == 0 else 1

if __name__ == "__main__":
    sys.exit(main())

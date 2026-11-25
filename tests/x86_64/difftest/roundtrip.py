#!/usr/bin/python3

# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

# Parser round trip: every line difftest_dump encodes is written to an assembly file, assembled with
# the spasm executable (hex listing) and the bytes must be the ones of the encoder.
#
# usage: roundtrip.py --dump <difftest_dump executable> --spasm <spasm executable> [--verbose]

import os
import sys
import tempfile
import optparse
import subprocess
from typing import List, Tuple

LISTING_BYTES_COLUMN = 10
LISTING_BYTES_WIDTH = 44

def run_dump(dump: str) -> List[Tuple[str, str]]:
    result = subprocess.run([dump], check=True, capture_output=True, text=True)

    lines = list()

    for line in result.stdout.splitlines():
        asm, tab, encoding = line.partition("\t")

        if tab == "" or encoding == "ERROR":
            continue

        lines.append((asm, encoding))

    return lines

def read_listing(path: str) -> List[Tuple[str, str]]:
    rows = list()

    with open(path, "r") as f:
        for line in f:
            line = line.rstrip("\n")
            hex_bytes = line[LISTING_BYTES_COLUMN:LISTING_BYTES_COLUMN + LISTING_BYTES_WIDTH].replace(" ", "")
            source = line[LISTING_BYTES_COLUMN + LISTING_BYTES_WIDTH + 2:]
            rows.append((source, hex_bytes))

    return rows

def main() -> int:
    parser = optparse.OptionParser()
    parser.add_option("--dump", dest="dump")
    parser.add_option("--spasm", dest="spasm")
    parser.add_option("--verbose", dest="verbose", action="store_true", default=False)

    options, _ = parser.parse_args()

    if options.dump is None or options.spasm is None:
        parser.print_help()
        return 2

    lines = run_dump(options.dump)

    with tempfile.TemporaryDirectory() as tmp_dir:
        source_path = os.path.join(tmp_dir, "roundtrip.s")
        listing_path = os.path.join(tmp_dir, "roundtrip.txt")

        with open(source_path, "w") as f:
            f.write("\n".join(asm for asm, _ in lines))
            f.write("\n")

        result = subprocess.run([options.spasm, source_path, "-f", "hex", "-o", listing_path],
                                capture_output=True,
                                text=True)

        if result.returncode != 0:
            print(result.stderr[:4000])
            print(f"spasm failed on the {len(lines)} lines of difftest_dump")
            return 1

        rows = read_listing(listing_path)

    if len(rows) != len(lines):
        print(f"{len(lines)} lines assembled into {len(rows)} instructions")
        return 1

    mismatches = 0

    for (asm, expected), (source, encoding) in zip(lines, rows):
        if source != asm or encoding != expected:
            mismatches += 1

            if options.verbose or mismatches <= 20:
                print(f"MISMATCH: {asm}\n  encoder: {expected}\n  parser:  {encoding} ({source})")

    print(f"{len(lines)} lines, {mismatches} mismatches")

    return 0 if mismatches == 0 else 1

if __name__ == "__main__":
    sys.exit(main())

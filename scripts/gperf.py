#!/usr/bin/python3

# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2025 - Present Romain Augier
# All rights reserved.

# Regenerates the gperf tables of SPAsm (needs gperf 3.1)
# usage: gperf.py [table.gperf...] (all the tables when none is given)

import os
import sys
import subprocess
from typing import List

ROOT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# -m 100 lets gperf search for a denser hash table (smaller word array).
# The mnemonics are too similar for a dense perfect hash, so we allow duplicate hash values
# (-D, resolved by a short linear scan): 19KB of tables instead of 49KB
GPERF_FILES = {
    "x86_64/x86_64_registers.gperf": ["-m", "100"],
    "x86_64/x86_64_mnemonics.gperf": ["-m", "100", "-k1-4,$", "-D"],
    "src/parser_keywords.gperf": ["-m", "100"],
}

def run_gperf(gperf_file: str) -> bool:
    """gperf_file is relative to the root of the repository"""

    gperf_path = os.path.join(ROOT_DIR, gperf_file)
    gperf_dir, gperf_name = os.path.split(gperf_path)
    output_name = os.path.splitext(gperf_name)[0] + ".c"

    cmd = ["gperf"] + GPERF_FILES[gperf_file] + [f"--output-file={output_name}", gperf_name]

    # Run from the table directory so the generated header only holds relative paths
    try:
        subprocess.run(cmd, check=True, cwd=gperf_dir, capture_output=True, text=True)
    except OSError as err:
        print(f"Error: cannot run gperf: {err}")
        return False
    except subprocess.CalledProcessError as err:
        print(f"Error: gperf failed on {gperf_file}:\n{err.stderr}")
        return False

    return True

def run_all() -> bool:
    return all(run_gperf(f) for f in GPERF_FILES)

def main(args: List[str]) -> int:
    files = args if len(args) > 0 else list(GPERF_FILES)

    for f in files:
        if f not in GPERF_FILES:
            print(f"Error: unknown gperf table: {f} (known: {', '.join(GPERF_FILES)})")
            return 1

    return 0 if all(run_gperf(f) for f in files) else 1

if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))

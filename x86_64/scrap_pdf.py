#!/usr/bin/python3

# pip install pymupdf

import optparse
import sys
import os

import fitz

def parse_pdf(input: str, output_file: str) -> bool:
    with fitz.open(input) as file:
        page = file[608]

        print(page.find_tables().tables[0].extract())

    return True

def main() -> int:
    parser = optparse.OptionParser()

    parser.add_option("-f", "--file", default=None, dest="file")
    parser.add_option("-o", "--output", default=None, dest="output")

    options, _ = parser.parse_args()
    
    if options.file is None:
        print("Error: missing --file argument")
        return 1

    if options.output is None:
        print("Error: missing --output argument")
        return 1

    if not os.path.exists(options.file):
        print(f"Error: file \"{options.file}\" does not exist")
        return 1

    if not parse_pdf(options.file, options.output):
        return 1

    return 0

if __name__ == "__main__":
    sys.exit(main())
/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_PARSER)
#define __SPASM_PARSER

#include "spasm/data.h"
#include "spasm/instruction.h"

/*
 * Parses Intel syntax assembly (see the README) into instructions (and labels) for the .text
 * section and data blocks for the .rodata, .data and .bss sections. code does not need to be
 * null-terminated and can be released after parsing. file_name is only used in error messages.
 * Errors are printed on stderr (file:line:column: error: ...), parsing goes on with the next line
 * to report them all. Returns false if there was any error
 */
SPASM_API bool spasm_parse(const char* code,
                           size_t code_sz,
                           const char* file_name,
                           SpasmData* data,
                           SpasmInstructions* instructions);

#endif /* !defined(__SPASM_PARSER) */

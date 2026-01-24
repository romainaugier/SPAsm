/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_PARSER)
#define __SPASM_PARSER

#include "spasm/data.h"
#include "spasm/instruction.h"

typedef struct
{
    char* code;
    size_t code_sz;
    size_t at;
} SpasmParser;

SPASM_API bool spasm_parse(SpasmParser* parser,
                           SpasmData* data,
                           SpasmInstructions* instrs);

#endif /* !defined(__SPASM_PARSER) */

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_PARSER_KEYWORDS)
#define __SPASM_PARSER_KEYWORDS

#include "spasm/common.h"

/* Keywords of the assembly syntax, looked up in a gperf table (src/parser_keywords.gperf) */

typedef enum
{
    SpasmParserKeywordKind_Directive, /* value: SpasmParserDirective */
    SpasmParserKeywordKind_Size,      /* value: size in bytes (byte, ..., zmmword) */
    SpasmParserKeywordKind_Ptr,
    SpasmParserKeywordKind_Rounding,  /* value: SpasmRounding ({rn-sae}, ..., {sae}) */
    SpasmParserKeywordKind_Zeroing,   /* {z} */
    SpasmParserKeywordKind_Broadcast, /* value: number of elements ({1to16}) */
} SpasmParserKeywordKind;

/* Directives dispatch to a handler through this index, aliases share it */
typedef enum
{
    SpasmParserDirective_Text,
    SpasmParserDirective_Data,
    SpasmParserDirective_RoData,
    SpasmParserDirective_Bss,
    SpasmParserDirective_Section,
    SpasmParserDirective_Global,
    SpasmParserDirective_Extern,
    SpasmParserDirective_Byte,
    SpasmParserDirective_Word,
    SpasmParserDirective_Dword,
    SpasmParserDirective_Qword,
    SpasmParserDirective_Ascii,
    SpasmParserDirective_Asciz,
    SpasmParserDirective_Zero,
    SpasmParserDirective_Align,
    SpasmParserDirective_P2Align,
    SpasmParserDirective_Equ,
    SpasmParserDirective_IntelSyntax,
    SpasmParserDirective_AttSyntax,
    SpasmParserDirective_COUNT,
} SpasmParserDirective;

typedef struct SpasmParserKeyword
{
    int name;
    uint8_t kind;
    uint8_t value;
} SpasmParserKeyword;

const SpasmParserKeyword* spasm_parser_keyword_lookup(const char* str, size_t len);

#endif /* !defined(__SPASM_PARSER_KEYWORDS) */

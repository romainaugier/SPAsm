/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/parser.h"

typedef enum
{
    SpasmSectionType_Unknown,
    SpasmSectionType_Const,
    SpasmSectionType_Data,
    SpasmSectionType_RoData,
    SpasmSectionType_Code,
} SpasmSectionType;

SpasmSectionType spasm_section_type_from_str(const char* s,
                                             size_t s_sz)
{
    if(!(*s == '.'))
        return SpasmSectionType_Unknown;

    s++;

    if(strncmp(s, "const", SPASM_MIN(s_sz, 5)) == 0)
        return SpasmSectionType_Const;

    if(strncmp(s, "data", SPASM_MIN(s_sz, 4)) == 0)
        return SpasmSectionType_Data;

    if(strncmp(s, "rodata", SPASM_MIN(s_sz, 6)) == 0)
        return SpasmSectionType_RoData;

    if(strncmp(s, "const", SPASM_MIN(s_sz, 5)) == 0)
        return SpasmSectionType_Code;

    return SpasmSectionType_Unknown;
}

void spasm_parser_skip_whitespaces(SpasmParser* parser)
{
    while(parser->at < parser->code_sz &&
          (parser->code[parser->at] == ' ' ||
           parser->code[parser->at] == '\n' ||
           parser->code[parser->at] == '\r'))
        parser->at++;
}

void spasm_parser_skip_comment(SpasmParser* parser)
{
    while(parser->at < parser->code_sz)
    {
        if(parser->code[parser->at] == '\n' ||
           parser->code[parser->at] == '\r')
            break;

        parser->at++;
    }

    parser->at += (size_t)parser->code[parser->at] == '\n';
    parser->at += (size_t)parser->code[parser->at] == '\r';
}

bool spasm_parse(SpasmParser* parser,
                 SpasmData* data,
                 SpasmInstructions* instrs)
{
    return true;
}

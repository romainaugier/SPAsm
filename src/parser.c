/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/parser.h"
#include "spasm/parser_keywords.h"
#include "spasm/register.h"
#include "spasm/operand.h"

#include "libromano/hashmap.h"
#include "libromano/memory.h"

#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#define SPASM_PARSER_MAX_OPERANDS 8
#define SPASM_PARSER_MAX_ALIGNMENT 4096

typedef enum
{
    SpasmParserSection_Text,
    SpasmParserSection_RoData,
    SpasmParserSection_Data,
    SpasmParserSection_Bss,
} SpasmParserSection;

/* The data block being filled, added to SpasmData on the next label or section change */
typedef struct
{
    const char* name;
    size_t name_sz;
    uint8_t* bytes;
    size_t size;
    size_t capacity;
    uint32_t alignment;
    bool active;
} SpasmParserBlock;

typedef struct
{
    const char* code;
    size_t code_sz;
    size_t at;
    const char* file_name;
    size_t line_start;
    uint32_t line;
    SpasmData* data;
    SpasmInstructions* instructions;
    HashMap* constants; /* name -> int64_t (.equ/.set) */
    HashMap* symbols; /* name -> uint32_t line of the label */
    SpasmParserBlock block;
    uint32_t pending_alignment;
    uint32_t anonymous_blocks;
    uint32_t num_errors;
    uint8_t section;
    bool line_error;
    char anonymous_name[32];
} SpasmParser;

/* An expression is a constant value, or a symbol plus a constant offset */
typedef struct
{
    int64_t value;
    const char* symbol;
    size_t symbol_sz;
} SpasmParserValue;

static void spasm_parser_error(SpasmParser* parser, size_t at, const char* format, ...)
{
    if(parser->line_error)
        return;

    parser->line_error = true;
    parser->num_errors++;

    size_t line_end = parser->line_start;

    while(line_end < parser->code_sz && parser->code[line_end] != '\n' && parser->code[line_end] != '\r')
        line_end++;

    at = SPASM_MIN(SPASM_MAX(at, parser->line_start), line_end);

    fprintf(stderr,
            "%s:%u:%u: error: ",
            parser->file_name,
            parser->line,
            (uint32_t)(at - parser->line_start + 1));

    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);

    fprintf(stderr, "\n  %.*s\n  ", (int)(line_end - parser->line_start), parser->code + parser->line_start);

    for(size_t i = parser->line_start; i < at; i++)
        fputc(parser->code[i] == '\t' ? '\t' : ' ', stderr);

    fputs("^\n", stderr);
}

static SPASM_FORCE_INLINE char spasm_parser_peek(const SpasmParser* parser)
{
    return parser->at < parser->code_sz ? parser->code[parser->at] : '\0';
}

static SPASM_FORCE_INLINE bool spasm_parser_is_ident_start(char c)
{
    return isalpha((unsigned char)c) || c == '_' || c == '.' || c == '$';
}

static SPASM_FORCE_INLINE bool spasm_parser_is_ident_char(char c)
{
    return isalnum((unsigned char)c) || c == '_' || c == '.' || c == '$' || c == '@';
}

static SPASM_FORCE_INLINE void spasm_parser_skip_blanks(SpasmParser* parser)
{
    while(parser->at < parser->code_sz && (parser->code[parser->at] == ' ' || parser->code[parser->at] == '\t'))
        parser->at++;
}

static SPASM_FORCE_INLINE bool spasm_parser_at_statement_end(const SpasmParser* parser)
{
    const char c = spasm_parser_peek(parser);

    return c == '\0' || c == '\n' || c == '\r' || c == ';' || c == '#';
}

static const char* spasm_parser_ident(SpasmParser* parser, size_t* len)
{
    const size_t start = parser->at;

    while(parser->at < parser->code_sz && spasm_parser_is_ident_char(parser->code[parser->at]))
        parser->at++;

    *len = parser->at - start;

    return parser->code + start;
}

static SPASM_FORCE_INLINE bool spasm_parser_is_opmask(SpasmRegister reg)
{
#if defined(SPASM_ENABLE_X86_64)
    return reg >= SpasmRegister_x86_64_K0 && reg <= SpasmRegister_x86_64_K7;
#else
    return false;
#endif /* defined(SPASM_ENABLE_X86_64) */
}

static SPASM_FORCE_INLINE bool spasm_parser_is_vector(SpasmRegister reg)
{
#if defined(SPASM_ENABLE_X86_64)
    return reg >= SpasmRegister_x86_64_XMM0 && reg <= SpasmRegister_x86_64_ZMM31;
#else
    return false;
#endif /* defined(SPASM_ENABLE_X86_64) */
}

static bool spasm_parser_number(SpasmParser* parser, int64_t* value)
{
    const size_t start = parser->at;
    uint64_t base = 10;

    if(spasm_parser_peek(parser) == '0' && parser->at + 1 < parser->code_sz)
    {
        switch(tolower((unsigned char)parser->code[parser->at + 1]))
        {
            case 'x': base = 16; break;
            case 'b': base = 2; break;
            case 'o': base = 8; break;
            default: break;
        }

        if(base != 10)
            parser->at += 2;
    }

    uint64_t result = 0;
    size_t num_digits = 0;

    while(parser->at < parser->code_sz)
    {
        const char c = (char)tolower((unsigned char)parser->code[parser->at]);
        uint64_t digit;

        if(c >= '0' && c <= '9')
            digit = (uint64_t)(c - '0');
        else if(c >= 'a' && c <= 'f')
            digit = (uint64_t)(c - 'a' + 10);
        else
            break;

        if(digit >= base)
            break;

        if(result > (UINT64_MAX - digit) / base)
        {
            spasm_parser_error(parser, start, "number does not fit in 64 bits");
            return false;
        }

        result = result * base + digit;
        num_digits++;
        parser->at++;
    }

    if(num_digits == 0 || spasm_parser_is_ident_char(spasm_parser_peek(parser)))
    {
        spasm_parser_error(parser, start, "invalid number");
        return false;
    }

    *value = (int64_t)result;

    return true;
}

/* parser->at is after the backslash */
static bool spasm_parser_escape(SpasmParser* parser, uint8_t* byte)
{
    const size_t start = parser->at - 1;
    const char c = spasm_parser_peek(parser);

    parser->at++;

    switch(c)
    {
        case 'n': *byte = '\n'; return true;
        case 't': *byte = '\t'; return true;
        case 'r': *byte = '\r'; return true;
        case '0': *byte = '\0'; return true;
        case 'a': *byte = '\a'; return true;
        case 'b': *byte = '\b'; return true;
        case 'f': *byte = '\f'; return true;
        case 'v': *byte = '\v'; return true;
        case 'e': *byte = 0x1B; return true;
        case '\\': *byte = '\\'; return true;
        case '"': *byte = '"'; return true;
        case '\'': *byte = '\''; return true;
        case 'x':
        {
            uint32_t value = 0;

            for(uint32_t i = 0; i < 2; i++)
            {
                const char h = (char)tolower((unsigned char)spasm_parser_peek(parser));

                if(h >= '0' && h <= '9')
                    value = value * 16 + (uint32_t)(h - '0');
                else if(h >= 'a' && h <= 'f')
                    value = value * 16 + (uint32_t)(h - 'a' + 10);
                else
                {
                    spasm_parser_error(parser, start, "\\x needs two hexadecimal digits");
                    return false;
                }

                parser->at++;
            }

            *byte = (uint8_t)value;
            return true;
        }
        default:
            spasm_parser_error(parser, start, "unknown escape sequence");
            return false;
    }
}

static bool spasm_parser_char_literal(SpasmParser* parser, int64_t* value)
{
    const size_t start = parser->at;
    uint8_t byte;

    parser->at++;

    const char c = spasm_parser_peek(parser);

    if(c == '\\')
    {
        parser->at++;

        if(!spasm_parser_escape(parser, &byte))
            return false;
    }
    else if(c == '\0' || c == '\n' || c == '\r' || c == '\'')
    {
        spasm_parser_error(parser, start, "invalid character literal");
        return false;
    }
    else
    {
        byte = (uint8_t)c;
        parser->at++;
    }

    if(spasm_parser_peek(parser) != '\'')
    {
        spasm_parser_error(parser, start, "missing closing quote of the character literal");
        return false;
    }

    parser->at++;
    *value = (int64_t)byte;

    return true;
}

static bool spasm_parser_additive(SpasmParser* parser, SpasmParserValue* out, bool allow_symbol);

static bool spasm_parser_unary(SpasmParser* parser, SpasmParserValue* out, bool allow_symbol)
{
    spasm_parser_skip_blanks(parser);

    const size_t start = parser->at;
    const char c = spasm_parser_peek(parser);

    out->value = 0;
    out->symbol = NULL;
    out->symbol_sz = 0;

    if(c == '-' || c == '~' || c == '+')
    {
        parser->at++;

        if(!spasm_parser_unary(parser, out, allow_symbol))
            return false;

        if(c == '+')
            return true;

        if(out->symbol != NULL)
        {
            spasm_parser_error(parser, start, "a symbol can only be added to");
            return false;
        }

        out->value = c == '-' ? (int64_t)(0 - (uint64_t)out->value) : ~out->value;

        return true;
    }

    if(c == '(')
    {
        parser->at++;

        if(!spasm_parser_additive(parser, out, allow_symbol))
            return false;

        spasm_parser_skip_blanks(parser);

        if(spasm_parser_peek(parser) != ')')
        {
            spasm_parser_error(parser, parser->at, "expected ')'");
            return false;
        }

        parser->at++;

        return true;
    }

    if(isdigit((unsigned char)c))
        return spasm_parser_number(parser, &out->value);

    if(c == '\'')
        return spasm_parser_char_literal(parser, &out->value);

    if(spasm_parser_is_ident_start(c))
    {
        size_t len;
        const char* name = spasm_parser_ident(parser, &len);
        const int64_t* constant = (const int64_t*)hashmap_get(parser->constants, name, (uint32_t)len, NULL);

        if(constant != NULL)
        {
            memcpy(&out->value, constant, sizeof(int64_t));
            return true;
        }

        if(spasm_register_from_string(name, len) != SpasmRegister_Invalid)
        {
            spasm_parser_error(parser, start, "unexpected register '%.*s'", (int)len, name);
            return false;
        }

        if(!allow_symbol)
        {
            spasm_parser_error(parser, start, "unknown constant '%.*s'", (int)len, name);
            return false;
        }

        out->symbol = name;
        out->symbol_sz = len;

        return true;
    }

    spasm_parser_error(parser, start, "expected an expression");

    return false;
}

static bool spasm_parser_multiplicative(SpasmParser* parser, SpasmParserValue* out, bool allow_symbol)
{
    if(!spasm_parser_unary(parser, out, allow_symbol))
        return false;

    for(;;)
    {
        spasm_parser_skip_blanks(parser);

        const size_t op_at = parser->at;
        const char op = spasm_parser_peek(parser);

        if(op != '*' && op != '/' && op != '%')
            return true;

        parser->at++;

        SpasmParserValue rhs;

        if(!spasm_parser_unary(parser, &rhs, allow_symbol))
            return false;

        if(out->symbol != NULL || rhs.symbol != NULL)
        {
            spasm_parser_error(parser, op_at, "a symbol can only be added to");
            return false;
        }

        if(op != '*' && rhs.value == 0)
        {
            spasm_parser_error(parser, op_at, "division by zero");
            return false;
        }

        switch(op)
        {
            case '*': out->value = (int64_t)((uint64_t)out->value * (uint64_t)rhs.value); break;
            case '/': out->value = rhs.value == -1 ? (int64_t)(0 - (uint64_t)out->value) : out->value / rhs.value; break;
            default: out->value = rhs.value == -1 ? 0 : out->value % rhs.value; break;
        }
    }
}

static bool spasm_parser_additive(SpasmParser* parser, SpasmParserValue* out, bool allow_symbol)
{
    if(!spasm_parser_multiplicative(parser, out, allow_symbol))
        return false;

    for(;;)
    {
        spasm_parser_skip_blanks(parser);

        const char op = spasm_parser_peek(parser);

        if(op != '+' && op != '-')
            return true;

        parser->at++;
        spasm_parser_skip_blanks(parser);

        const size_t term_at = parser->at;
        SpasmParserValue term;

        if(!spasm_parser_multiplicative(parser, &term, allow_symbol))
            return false;

        if(term.symbol != NULL)
        {
            if(op == '-')
            {
                spasm_parser_error(parser, term_at, "a symbol cannot be subtracted");
                return false;
            }

            if(out->symbol != NULL)
            {
                spasm_parser_error(parser, term_at, "only one symbol per expression");
                return false;
            }

            out->symbol = term.symbol;
            out->symbol_sz = term.symbol_sz;
        }

        out->value = op == '+' ? (int64_t)((uint64_t)out->value + (uint64_t)term.value) :
                                 (int64_t)((uint64_t)out->value - (uint64_t)term.value);
    }
}

static bool spasm_parser_constant_expression(SpasmParser* parser, int64_t* value)
{
    SpasmParserValue result;

    if(!spasm_parser_additive(parser, &result, false))
        return false;

    *value = result.value;

    return true;
}

static SpasmOperand spasm_parser_immediate(int64_t value)
{
    if(value >= INT8_MIN && value <= INT8_MAX)
        return SpasmOpImm8(value);

    if(value >= INT16_MIN && value <= INT16_MAX)
        return SpasmOpImm16(value);

    if(value >= INT32_MIN && value <= INT32_MAX)
        return SpasmOpImm32(value);

    return SpasmOpImm64(value);
}

static const char* spasm_parser_copy_symbol(SpasmParser* parser, const char* name, size_t len, size_t at)
{
    const char* copy = spasm_instructions_copy_string(parser->instructions, name, len);

    if(copy == NULL)
        spasm_parser_error(parser, at, "symbol name is too long");

    return copy;
}

/* {k1}, {z}, {1to16}... parser->at is on the '{' */
static bool spasm_parser_braces(SpasmParser* parser, const char** content, size_t* len)
{
    const size_t start = parser->at;

    parser->at++;
    spasm_parser_skip_blanks(parser);

    const size_t content_start = parser->at;

    while(parser->at < parser->code_sz &&
          parser->code[parser->at] != '}' &&
          parser->code[parser->at] != '\n' &&
          parser->code[parser->at] != '\r')
        parser->at++;

    if(spasm_parser_peek(parser) != '}')
    {
        spasm_parser_error(parser, start, "missing '}'");
        return false;
    }

    size_t content_end = parser->at;

    while(content_end > content_start &&
          (parser->code[content_end - 1] == ' ' || parser->code[content_end - 1] == '\t'))
        content_end--;

    parser->at++;

    *content = parser->code + content_start;
    *len = content_end - content_start;

    return true;
}

static bool spasm_parser_decorators(SpasmParser* parser, SpasmOperand* operand)
{
    for(;;)
    {
        spasm_parser_skip_blanks(parser);

        if(spasm_parser_peek(parser) != '{')
            return true;

        const size_t start = parser->at;
        const char* content;
        size_t len;

        if(!spasm_parser_braces(parser, &content, &len))
            return false;

        const SpasmRegister reg = spasm_register_from_string(content, len);

        if(spasm_parser_is_opmask(reg))
        {
            if(operand->mask != 0)
            {
                spasm_parser_error(parser, start, "only one opmask per operand");
                return false;
            }

            operand->mask = (uint8_t)reg;
            continue;
        }

        const SpasmParserKeyword* keyword = spasm_parser_keyword_lookup(content, len);

        if(keyword != NULL && keyword->kind == SpasmParserKeywordKind_Zeroing)
        {
            operand->zeroing = true;
            continue;
        }

        if(keyword != NULL && keyword->kind == SpasmParserKeywordKind_Broadcast)
        {
            if(operand->type != SpasmOperandType_Mem)
            {
                spasm_parser_error(parser, start, "broadcast needs a memory operand");
                return false;
            }

            operand->mem_broadcast = keyword->value;
            continue;
        }

        if(keyword != NULL && keyword->kind == SpasmParserKeywordKind_Rounding)
        {
            spasm_parser_error(parser, start, "the rounding mode is an operand of its own: , {%.*s}", (int)len, content);
            return false;
        }

        spasm_parser_error(parser, start, "unknown decorator {%.*s}", (int)len, content);

        return false;
    }
}

static bool spasm_parser_memory_register(SpasmParser* parser,
                                         SpasmOperand* operand,
                                         SpasmRegister reg,
                                         int64_t scale,
                                         size_t at)
{
    if(scale == 0 && spasm_parser_is_vector(reg))
        scale = 1;

    if(scale != 0)
    {
        if(scale != 1 && scale != 2 && scale != 4 && scale != 8)
        {
            spasm_parser_error(parser, at, "the scale must be 1, 2, 4 or 8");
            return false;
        }

        if(operand->mem_index != 0)
        {
            spasm_parser_error(parser, at, "only one index register per memory operand");
            return false;
        }

        operand->mem_index = (uint8_t)reg;
        operand->mem_scale = (uint8_t)scale;

        return true;
    }

    if(operand->mem_reg == 0)
    {
        operand->mem_reg = (uint8_t)reg;
        return true;
    }

    if(operand->mem_index == 0)
    {
        operand->mem_index = (uint8_t)reg;
        operand->mem_scale = 1;
        return true;
    }

    spasm_parser_error(parser, at, "too many registers in the memory operand");

    return false;
}

/* [base + index * scale + displacement + symbol], parser->at is on the '[' */
static bool spasm_parser_memory(SpasmParser* parser, SpasmOperand* operand, uint8_t size)
{
    memset(operand, 0, sizeof(SpasmOperand));
    operand->type = SpasmOperandType_Mem;
    operand->mem_size = size;

    int64_t displacement = 0;
    const char* symbol = NULL;
    size_t symbol_sz = 0;
    size_t symbol_at = 0;
    bool negative = false;

    parser->at++;
    spasm_parser_skip_blanks(parser);

    if(spasm_parser_peek(parser) == '-' || spasm_parser_peek(parser) == '+')
    {
        negative = spasm_parser_peek(parser) == '-';
        parser->at++;
    }

    for(;;)
    {
        spasm_parser_skip_blanks(parser);

        const size_t term_at = parser->at;

        if(spasm_parser_is_ident_start(spasm_parser_peek(parser)))
        {
            size_t len;
            const char* name = spasm_parser_ident(parser, &len);
            const SpasmRegister reg = spasm_register_from_string(name, len);

            if(reg != SpasmRegister_Invalid)
            {
                if(negative)
                {
                    spasm_parser_error(parser, term_at, "a register cannot be subtracted");
                    return false;
                }

                int64_t scale = 0;

                spasm_parser_skip_blanks(parser);

                if(spasm_parser_peek(parser) == '*')
                {
                    parser->at++;

                    SpasmParserValue value;

                    if(!spasm_parser_unary(parser, &value, false))
                        return false;

                    scale = value.value;
                }

                if(!spasm_parser_memory_register(parser, operand, reg, scale, term_at))
                    return false;
            }
            else
            {
                const int64_t* constant = (const int64_t*)hashmap_get(parser->constants, name, (uint32_t)len, NULL);

                if(constant != NULL)
                {
                    int64_t value;
                    memcpy(&value, constant, sizeof(int64_t));
                    displacement += negative ? -value : value;
                }
                else if(negative)
                {
                    spasm_parser_error(parser, term_at, "a symbol cannot be subtracted");
                    return false;
                }
                else if(symbol != NULL)
                {
                    spasm_parser_error(parser, term_at, "only one symbol per memory operand");
                    return false;
                }
                else
                {
                    symbol = name;
                    symbol_sz = len;
                    symbol_at = term_at;
                }
            }
        }
        else
        {
            SpasmParserValue value;

            if(!spasm_parser_unary(parser, &value, false))
                return false;

            spasm_parser_skip_blanks(parser);

            if(spasm_parser_peek(parser) == '*')
            {
                parser->at++;
                spasm_parser_skip_blanks(parser);

                const size_t reg_at = parser->at;
                size_t len;
                const char* name = spasm_parser_ident(parser, &len);
                const SpasmRegister reg = spasm_register_from_string(name, len);

                if(reg == SpasmRegister_Invalid)
                {
                    spasm_parser_error(parser, reg_at, "expected an index register");
                    return false;
                }

                if(negative)
                {
                    spasm_parser_error(parser, term_at, "a register cannot be subtracted");
                    return false;
                }

                if(!spasm_parser_memory_register(parser, operand, reg, value.value, reg_at))
                    return false;
            }
            else
            {
                displacement += negative ? -value.value : value.value;
            }
        }

        if(displacement < INT32_MIN || displacement > INT32_MAX)
        {
            spasm_parser_error(parser, term_at, "the displacement does not fit in 32 bits");
            return false;
        }

        spasm_parser_skip_blanks(parser);

        const char c = spasm_parser_peek(parser);

        if(c == ']')
        {
            parser->at++;
            break;
        }

        if(c == '+' || c == '-')
        {
            negative = c == '-';
            parser->at++;
            continue;
        }

        spasm_parser_error(parser, parser->at, "expected '+', '-' or ']'");

        return false;
    }

    operand->mem_displacement = (int32_t)displacement;

    if(symbol != NULL)
    {
        operand->symbol_name = spasm_parser_copy_symbol(parser, symbol, symbol_sz, symbol_at);

        if(operand->symbol_name == NULL)
            return false;
    }

    return true;
}

static bool spasm_parser_operand(SpasmParser* parser, SpasmOperand* operand)
{
    const size_t start = parser->at;
    const char c = spasm_parser_peek(parser);

    memset(operand, 0, sizeof(SpasmOperand));

    if(c == '{')
    {
        const char* content;
        size_t len;

        if(!spasm_parser_braces(parser, &content, &len))
            return false;

        const SpasmParserKeyword* keyword = spasm_parser_keyword_lookup(content, len);

        if(keyword == NULL || keyword->kind != SpasmParserKeywordKind_Rounding)
        {
            spasm_parser_error(parser, start, "expected a rounding mode ({rn-sae}, {rd-sae}, {ru-sae}, {rz-sae} or {sae})");
            return false;
        }

        *operand = SpasmOpRounding(keyword->value);

        return true;
    }

    if(c == '[')
        return spasm_parser_memory(parser, operand, 0) && spasm_parser_decorators(parser, operand);

    if(spasm_parser_is_ident_start(c))
    {
        size_t len;
        const char* name = spasm_parser_ident(parser, &len);
        const SpasmParserKeyword* keyword = spasm_parser_keyword_lookup(name, len);

        if(keyword != NULL && keyword->kind == SpasmParserKeywordKind_Size)
        {
            spasm_parser_skip_blanks(parser);

            if(spasm_parser_is_ident_start(spasm_parser_peek(parser)))
            {
                const size_t ptr_at = parser->at;
                size_t ptr_len;
                const char* ptr = spasm_parser_ident(parser, &ptr_len);
                const SpasmParserKeyword* ptr_keyword = spasm_parser_keyword_lookup(ptr, ptr_len);

                if(ptr_keyword == NULL || ptr_keyword->kind != SpasmParserKeywordKind_Ptr)
                {
                    spasm_parser_error(parser, ptr_at, "expected 'ptr' or '['");
                    return false;
                }

                spasm_parser_skip_blanks(parser);
            }

            if(spasm_parser_peek(parser) != '[')
            {
                spasm_parser_error(parser, parser->at, "expected '['");
                return false;
            }

            return spasm_parser_memory(parser, operand, keyword->value) && spasm_parser_decorators(parser, operand);
        }

        const SpasmRegister reg = spasm_register_from_string(name, len);

        if(reg != SpasmRegister_Invalid)
        {
            *operand = SpasmOpReg(reg);
            return spasm_parser_decorators(parser, operand);
        }

        parser->at = start;
    }

    SpasmParserValue value;

    if(!spasm_parser_additive(parser, &value, true))
        return false;

    if(value.symbol != NULL)
    {
        operand->type = SpasmOperandType_Symbol;
        operand->imm_value = value.value;
        operand->symbol_name = spasm_parser_copy_symbol(parser, value.symbol, value.symbol_sz, start);

        return operand->symbol_name != NULL;
    }

    *operand = spasm_parser_immediate(value.value);

    return true;
}

static bool spasm_parser_instruction(SpasmParser* parser, const char* mnemonic, size_t len, size_t mnemonic_at)
{
    if(parser->section != SpasmParserSection_Text)
    {
        spasm_parser_error(parser, mnemonic_at, "instructions must be in the .text section");
        return false;
    }

    if(!spasm_mnemonic_exists(mnemonic, len))
    {
        spasm_parser_error(parser, mnemonic_at, "unknown instruction '%.*s'", (int)len, mnemonic);
        return false;
    }

    SpasmOperand operands[SPASM_PARSER_MAX_OPERANDS];
    uint8_t num_operands = 0;

    spasm_parser_skip_blanks(parser);

    if(!spasm_parser_at_statement_end(parser))
    {
        for(;;)
        {
            if(num_operands == SPASM_PARSER_MAX_OPERANDS)
            {
                spasm_parser_error(parser, parser->at, "too many operands");
                return false;
            }

            if(!spasm_parser_operand(parser, &operands[num_operands]))
                return false;

            num_operands++;

            spasm_parser_skip_blanks(parser);

            if(spasm_parser_peek(parser) != ',')
                break;

            parser->at++;
            spasm_parser_skip_blanks(parser);
        }
    }

    if(spasm_instructions_push(parser->instructions, mnemonic, len, operands, num_operands, parser->line) == NULL)
    {
        spasm_parser_error(parser, mnemonic_at, "cannot add the instruction");
        return false;
    }

    return true;
}

static bool spasm_parser_define_symbol(SpasmParser* parser, const char* name, size_t len, size_t at)
{
    const uint32_t* line = (const uint32_t*)hashmap_get(parser->symbols, name, (uint32_t)len, NULL);

    if(line != NULL)
    {
        uint32_t defined_at;
        memcpy(&defined_at, line, sizeof(uint32_t));
        spasm_parser_error(parser, at, "'%.*s' is already defined at line %u", (int)len, name, defined_at);
        return false;
    }

    if(hashmap_get(parser->constants, name, (uint32_t)len, NULL) != NULL)
    {
        spasm_parser_error(parser, at, "'%.*s' is already defined as a constant", (int)len, name);
        return false;
    }

    hashmap_insert(parser->symbols, name, (uint32_t)len, &parser->line, (uint32_t)sizeof(uint32_t));

    return true;
}

static bool spasm_parser_flush_block(SpasmParser* parser)
{
    SpasmParserBlock* block = &parser->block;

    if(!block->active)
        return true;

    block->active = false;

    const SpasmDataType type = parser->section == SpasmParserSection_RoData ? SpasmDataType_ROData :
                               parser->section == SpasmParserSection_Data ? SpasmDataType_Data :
                                                                            SpasmDataType_BSS;

    const bool added = spasm_data_add(parser->data,
                                      block->name,
                                      (uint32_t)block->name_sz,
                                      type == SpasmDataType_BSS ? NULL : block->bytes,
                                      block->size,
                                      type,
                                      block->alignment);

    block->size = 0;

    if(!added)
    {
        spasm_parser_error(parser, parser->at, "cannot add the data block '%.*s'", (int)block->name_sz, block->name);
        return false;
    }

    return true;
}

static void spasm_parser_start_block(SpasmParser* parser, const char* name, size_t name_sz)
{
    parser->block.name = name;
    parser->block.name_sz = name_sz;
    parser->block.size = 0;
    parser->block.alignment = parser->pending_alignment != 0 ? parser->pending_alignment : 1;
    parser->block.active = true;
    parser->pending_alignment = 0;
}

/* Data without a label goes to an anonymous block */
static bool spasm_parser_data_block(SpasmParser* parser, size_t at, bool initialized)
{
    if(parser->section == SpasmParserSection_Text)
    {
        spasm_parser_error(parser, at, "data must be in the .rodata, .data or .bss section");
        return false;
    }

    if(parser->section == SpasmParserSection_Bss && initialized)
    {
        spasm_parser_error(parser, at, "only .zero, .skip, .space and .align are allowed in .bss");
        return false;
    }

    if(parser->block.active)
        return true;

    const int len = snprintf(parser->anonymous_name,
                             sizeof(parser->anonymous_name),
                             "__spasm_anon_%u",
                             parser->anonymous_blocks++);

    if(!spasm_parser_define_symbol(parser, parser->anonymous_name, (size_t)len, at))
        return false;

    spasm_parser_start_block(parser, parser->anonymous_name, (size_t)len);

    return true;
}

static uint8_t* spasm_parser_block_push(SpasmParser* parser, size_t count, size_t at)
{
    SpasmParserBlock* block = &parser->block;

    if(parser->section == SpasmParserSection_Bss)
    {
        block->size += count;
        return NULL;
    }

    if(block->size + count > block->capacity)
    {
        size_t capacity = block->capacity == 0 ? 256 : block->capacity * 2;

        while(capacity < block->size + count)
            capacity *= 2;

        uint8_t* bytes = (uint8_t*)romano_realloc(block->bytes, capacity);

        if(bytes == NULL)
        {
            spasm_parser_error(parser, at, "out of memory");
            return NULL;
        }

        block->bytes = bytes;
        block->capacity = capacity;
    }

    uint8_t* ptr = block->bytes + block->size;
    block->size += count;

    return ptr;
}

static bool spasm_parser_string(SpasmParser* parser, bool null_terminated)
{
    const size_t start = parser->at;

    if(spasm_parser_peek(parser) != '"')
    {
        spasm_parser_error(parser, start, "expected a string");
        return false;
    }

    parser->at++;

    for(;;)
    {
        const char c = spasm_parser_peek(parser);
        uint8_t byte;

        if(c == '\0' || c == '\n' || c == '\r')
        {
            spasm_parser_error(parser, start, "missing closing quote of the string");
            return false;
        }

        parser->at++;

        if(c == '"')
            break;

        if(c == '\\')
        {
            if(!spasm_parser_escape(parser, &byte))
                return false;
        }
        else
        {
            byte = (uint8_t)c;
        }

        uint8_t* ptr = spasm_parser_block_push(parser, 1, start);

        if(ptr == NULL)
            return false;

        *ptr = byte;
    }

    if(null_terminated)
    {
        uint8_t* ptr = spasm_parser_block_push(parser, 1, start);

        if(ptr == NULL)
            return false;

        *ptr = 0;
    }

    return true;
}

static bool spasm_parser_expect_values(SpasmParser* parser)
{
    spasm_parser_skip_blanks(parser);

    if(spasm_parser_at_statement_end(parser))
    {
        spasm_parser_error(parser, parser->at, "expected a value");
        return false;
    }

    return true;
}

static bool spasm_parser_next_value(SpasmParser* parser)
{
    spasm_parser_skip_blanks(parser);

    if(spasm_parser_peek(parser) != ',')
        return false;

    parser->at++;
    spasm_parser_skip_blanks(parser);

    return true;
}

typedef bool (*SpasmParserDirectiveHandler)(SpasmParser* parser, uint8_t directive, size_t at);

static bool spasm_parser_directive_section(SpasmParser* parser, uint8_t directive, size_t at)
{
    SPASM_UNUSED(at);

    if(directive == SpasmParserDirective_Section)
    {
        spasm_parser_skip_blanks(parser);

        const size_t name_at = parser->at;
        size_t len;
        const char* name = spasm_parser_ident(parser, &len);
        const SpasmParserKeyword* keyword = spasm_parser_keyword_lookup(name, len);

        if(keyword == NULL ||
           keyword->kind != SpasmParserKeywordKind_Directive ||
           keyword->value > SpasmParserDirective_Bss)
        {
            spasm_parser_error(parser, name_at, "unknown section '%.*s' (.text, .rodata, .rdata, .data or .bss)", (int)len, name);
            return false;
        }

        /* Section flags (, "aw", @progbits) mean nothing in a flat image */
        while(parser->at < parser->code_sz && parser->code[parser->at] != '\n' && parser->code[parser->at] != '\r')
            parser->at++;

        directive = keyword->value;
    }

    if(!spasm_parser_flush_block(parser))
        return false;

    switch(directive)
    {
        case SpasmParserDirective_Text: parser->section = SpasmParserSection_Text; break;
        case SpasmParserDirective_RoData: parser->section = SpasmParserSection_RoData; break;
        case SpasmParserDirective_Data: parser->section = SpasmParserSection_Data; break;
        default: parser->section = SpasmParserSection_Bss; break;
    }

    parser->pending_alignment = 0;

    return true;
}

/* .global/.extern: a flat image has no symbol table, the names are only checked */
static bool spasm_parser_directive_symbols(SpasmParser* parser, uint8_t directive, size_t at)
{
    SPASM_UNUSED(directive);
    SPASM_UNUSED(at);

    if(!spasm_parser_expect_values(parser))
        return false;

    do
    {
        if(!spasm_parser_is_ident_start(spasm_parser_peek(parser)))
        {
            spasm_parser_error(parser, parser->at, "expected a symbol name");
            return false;
        }

        size_t len;
        spasm_parser_ident(parser, &len);
    }
    while(spasm_parser_next_value(parser));

    return true;
}

static bool spasm_parser_directive_integers(SpasmParser* parser, uint8_t directive, size_t at)
{
    const uint32_t size = directive == SpasmParserDirective_Byte ? 1 :
                          directive == SpasmParserDirective_Word ? 2 :
                          directive == SpasmParserDirective_Dword ? 4 :
                                                                    8;

    if(!spasm_parser_data_block(parser, at, true) || !spasm_parser_expect_values(parser))
        return false;

    do
    {
        const size_t value_at = parser->at;

        if(size == 1 && spasm_parser_peek(parser) == '"')
        {
            if(!spasm_parser_string(parser, false))
                return false;

            continue;
        }

        int64_t value;

        if(!spasm_parser_constant_expression(parser, &value))
            return false;

        if(size < 8)
        {
            const int64_t min = -((int64_t)1 << (size * 8 - 1));
            const int64_t max = ((int64_t)1 << (size * 8)) - 1;

            if(value < min || value > max)
            {
                spasm_parser_error(parser, value_at, "the value does not fit in %u byte%s", size, size > 1 ? "s" : "");
                return false;
            }
        }

        uint8_t* ptr = spasm_parser_block_push(parser, size, value_at);

        if(ptr == NULL)
            return false;

        for(uint32_t i = 0; i < size; i++)
            ptr[i] = (uint8_t)((uint64_t)value >> (i * 8));
    }
    while(spasm_parser_next_value(parser));

    return true;
}

static bool spasm_parser_directive_strings(SpasmParser* parser, uint8_t directive, size_t at)
{
    if(!spasm_parser_data_block(parser, at, true) || !spasm_parser_expect_values(parser))
        return false;

    do
    {
        if(!spasm_parser_string(parser, directive == SpasmParserDirective_Asciz))
            return false;
    }
    while(spasm_parser_next_value(parser));

    return true;
}

/* .zero count[, fill] */
static bool spasm_parser_directive_zero(SpasmParser* parser, uint8_t directive, size_t at)
{
    SPASM_UNUSED(directive);

    if(!spasm_parser_data_block(parser, at, false) || !spasm_parser_expect_values(parser))
        return false;

    const size_t count_at = parser->at;
    int64_t count;
    int64_t fill = 0;

    if(!spasm_parser_constant_expression(parser, &count))
        return false;

    if(count < 0 || count > UINT32_MAX)
    {
        spasm_parser_error(parser, count_at, "invalid size");
        return false;
    }

    if(spasm_parser_next_value(parser))
    {
        const size_t fill_at = parser->at;

        if(!spasm_parser_constant_expression(parser, &fill))
            return false;

        if(fill < INT8_MIN || fill > UINT8_MAX || (fill != 0 && parser->section == SpasmParserSection_Bss))
        {
            spasm_parser_error(parser, fill_at, "invalid fill value");
            return false;
        }
    }

    uint8_t* ptr = spasm_parser_block_push(parser, (size_t)count, count_at);

    if(ptr != NULL)
        memset(ptr, (int)(uint8_t)fill, (size_t)count);

    return parser->section == SpasmParserSection_Bss || ptr != NULL || count == 0;
}

/* .align/.balign bytes, .p2align power: aligns the current block, or the next one after a label */
static bool spasm_parser_directive_align(SpasmParser* parser, uint8_t directive, size_t at)
{
    if(parser->section == SpasmParserSection_Text)
    {
        spasm_parser_error(parser, at, "alignment is not supported in .text yet");
        return false;
    }

    if(!spasm_parser_expect_values(parser))
        return false;

    const size_t value_at = parser->at;
    int64_t value;

    if(!spasm_parser_constant_expression(parser, &value))
        return false;

    if(directive == SpasmParserDirective_P2Align)
        value = value >= 0 && value < 16 ? ((int64_t)1 << value) : 0;

    if(value <= 0 || value > SPASM_PARSER_MAX_ALIGNMENT || (value & (value - 1)) != 0)
    {
        spasm_parser_error(parser, value_at, "the alignment must be a power of 2 up to %u", SPASM_PARSER_MAX_ALIGNMENT);
        return false;
    }

    const uint32_t alignment = (uint32_t)value;
    SpasmParserBlock* block = &parser->block;

    if(!block->active)
    {
        parser->pending_alignment = SPASM_MAX(parser->pending_alignment, alignment);
        return true;
    }

    block->alignment = SPASM_MAX(block->alignment, alignment);

    const size_t padding = (alignment - block->size % alignment) % alignment;
    uint8_t* ptr = spasm_parser_block_push(parser, padding, at);

    if(ptr != NULL)
        memset(ptr, 0, padding);

    return parser->section == SpasmParserSection_Bss || ptr != NULL || padding == 0;
}

/* .equ/.set name, value */
static bool spasm_parser_directive_equ(SpasmParser* parser, uint8_t directive, size_t at)
{
    SPASM_UNUSED(directive);
    SPASM_UNUSED(at);

    spasm_parser_skip_blanks(parser);

    const size_t name_at = parser->at;

    if(!spasm_parser_is_ident_start(spasm_parser_peek(parser)))
    {
        spasm_parser_error(parser, name_at, "expected a constant name");
        return false;
    }

    size_t len;
    const char* name = spasm_parser_ident(parser, &len);

    if(spasm_register_from_string(name, len) != SpasmRegister_Invalid)
    {
        spasm_parser_error(parser, name_at, "'%.*s' is a register", (int)len, name);
        return false;
    }

    if(hashmap_get(parser->symbols, name, (uint32_t)len, NULL) != NULL)
    {
        spasm_parser_error(parser, name_at, "'%.*s' is already defined as a label", (int)len, name);
        return false;
    }

    if(!spasm_parser_next_value(parser))
    {
        spasm_parser_error(parser, parser->at, "expected ','");
        return false;
    }

    int64_t value;

    if(!spasm_parser_constant_expression(parser, &value))
        return false;

    int64_t* existing = (int64_t*)hashmap_get(parser->constants, name, (uint32_t)len, NULL);

    if(existing != NULL)
        memcpy(existing, &value, sizeof(int64_t));
    else
        hashmap_insert(parser->constants, name, (uint32_t)len, &value, (uint32_t)sizeof(int64_t));

    return true;
}

static bool spasm_parser_directive_intel_syntax(SpasmParser* parser, uint8_t directive, size_t at)
{
    SPASM_UNUSED(directive);
    SPASM_UNUSED(at);

    spasm_parser_skip_blanks(parser);

    if(spasm_parser_at_statement_end(parser))
        return true;

    const size_t option_at = parser->at;
    size_t len;
    const char* option = spasm_parser_ident(parser, &len);

    if(len != 8 || strncmp(option, "noprefix", 8) != 0)
    {
        spasm_parser_error(parser, option_at, "only .intel_syntax noprefix is supported");
        return false;
    }

    return true;
}

static bool spasm_parser_directive_att_syntax(SpasmParser* parser, uint8_t directive, size_t at)
{
    SPASM_UNUSED(directive);

    spasm_parser_error(parser, at, "AT&T syntax is not supported");

    return false;
}

static const SpasmParserDirectiveHandler spasm_parser_directive_handlers[SpasmParserDirective_COUNT] = {
    [SpasmParserDirective_Text] = spasm_parser_directive_section,
    [SpasmParserDirective_Data] = spasm_parser_directive_section,
    [SpasmParserDirective_RoData] = spasm_parser_directive_section,
    [SpasmParserDirective_Bss] = spasm_parser_directive_section,
    [SpasmParserDirective_Section] = spasm_parser_directive_section,
    [SpasmParserDirective_Global] = spasm_parser_directive_symbols,
    [SpasmParserDirective_Extern] = spasm_parser_directive_symbols,
    [SpasmParserDirective_Byte] = spasm_parser_directive_integers,
    [SpasmParserDirective_Word] = spasm_parser_directive_integers,
    [SpasmParserDirective_Dword] = spasm_parser_directive_integers,
    [SpasmParserDirective_Qword] = spasm_parser_directive_integers,
    [SpasmParserDirective_Ascii] = spasm_parser_directive_strings,
    [SpasmParserDirective_Asciz] = spasm_parser_directive_strings,
    [SpasmParserDirective_Zero] = spasm_parser_directive_zero,
    [SpasmParserDirective_Align] = spasm_parser_directive_align,
    [SpasmParserDirective_P2Align] = spasm_parser_directive_align,
    [SpasmParserDirective_Equ] = spasm_parser_directive_equ,
    [SpasmParserDirective_IntelSyntax] = spasm_parser_directive_intel_syntax,
    [SpasmParserDirective_AttSyntax] = spasm_parser_directive_att_syntax,
};

static bool spasm_parser_directive(SpasmParser* parser, const char* name, size_t len, size_t at)
{
    const SpasmParserKeyword* keyword = spasm_parser_keyword_lookup(name, len);

    if(keyword == NULL || keyword->kind != SpasmParserKeywordKind_Directive)
    {
        spasm_parser_error(parser, at, "unknown directive '%.*s'", (int)len, name);
        return false;
    }

    return spasm_parser_directive_handlers[keyword->value](parser, keyword->value, at);
}

static bool spasm_parser_label(SpasmParser* parser, const char* name, size_t len, size_t at)
{
    if(len > UINT8_MAX)
    {
        spasm_parser_error(parser, at, "the label name is longer than 255 characters");
        return false;
    }

    if(spasm_register_from_string(name, len) != SpasmRegister_Invalid)
    {
        spasm_parser_error(parser, at, "'%.*s' is a register", (int)len, name);
        return false;
    }

    if(!spasm_parser_define_symbol(parser, name, len, at))
        return false;

    if(parser->section == SpasmParserSection_Text)
    {
        if(spasm_instructions_push_label(parser->instructions, name, len, parser->line) == NULL)
        {
            spasm_parser_error(parser, at, "cannot add the label");
            return false;
        }

        return true;
    }

    if(!spasm_parser_flush_block(parser))
        return false;

    spasm_parser_start_block(parser, name, len);

    return true;
}

/* [label:]... [directive | instruction] [; comment] */
static void spasm_parser_line(SpasmParser* parser)
{
    for(;;)
    {
        spasm_parser_skip_blanks(parser);

        if(spasm_parser_at_statement_end(parser))
            return;

        const size_t name_at = parser->at;

        if(!spasm_parser_is_ident_start(spasm_parser_peek(parser)))
        {
            spasm_parser_error(parser, name_at, "expected a label, a directive or an instruction");
            return;
        }

        size_t len;
        const char* name = spasm_parser_ident(parser, &len);

        spasm_parser_skip_blanks(parser);

        if(spasm_parser_peek(parser) == ':')
        {
            parser->at++;

            if(!spasm_parser_label(parser, name, len, name_at))
                return;

            continue;
        }

        const bool parsed = name[0] == '.' ? spasm_parser_directive(parser, name, len, name_at) :
                                             spasm_parser_instruction(parser, name, len, name_at);

        if(!parsed)
            return;

        break;
    }

    spasm_parser_skip_blanks(parser);

    if(!spasm_parser_at_statement_end(parser))
        spasm_parser_error(parser, parser->at, "unexpected '%c'", spasm_parser_peek(parser));
}

bool spasm_parse(const char* code,
                 size_t code_sz,
                 const char* file_name,
                 SpasmData* data,
                 SpasmInstructions* instructions)
{
    SpasmParser parser;
    memset(&parser, 0, sizeof(SpasmParser));

    parser.code = code;
    parser.code_sz = code_sz;
    parser.file_name = file_name != NULL ? file_name : "<input>";
    parser.line = 1;
    parser.data = data;
    parser.instructions = instructions;
    parser.constants = hashmap_new(64);
    parser.symbols = hashmap_new(256);

    if(parser.constants == NULL || parser.symbols == NULL)
    {
        fprintf(stderr, "%s: error: out of memory\n", parser.file_name);

        if(parser.constants != NULL)
            hashmap_free(parser.constants);

        if(parser.symbols != NULL)
            hashmap_free(parser.symbols);

        return false;
    }

    while(parser.at < parser.code_sz)
    {
        parser.line_start = parser.at;
        parser.line_error = false;

        spasm_parser_line(&parser);

        while(parser.at < parser.code_sz && parser.code[parser.at] != '\n')
            parser.at++;

        if(parser.at < parser.code_sz)
        {
            parser.at++;
            parser.line++;
        }
    }

    parser.line_start = parser.at;
    parser.line_error = false;

    spasm_parser_flush_block(&parser);

    if(parser.block.bytes != NULL)
        romano_free(parser.block.bytes);

    hashmap_free(parser.constants);
    hashmap_free(parser.symbols);

    return parser.num_errors == 0;
}

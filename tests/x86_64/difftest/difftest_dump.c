/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

/*
    Walks every form of the x86_64 table, generates a few operand sets for it, encodes them with
    SPAsm and prints one line per instruction: "<intel syntax>\t<hex bytes or ERROR>".
    difftest.py assembles the same lines with llvm-mc and compares the bytes.
*/

#include "spasm/x86_64.h"
#include "spasm/bytecode.h"
#include "spasm/instruction.h"
#include "spasm/register.h"

#include <stdio.h>
#include <string.h>

typedef struct
{
    SpasmRegister base;
    SpasmRegister index;
    uint8_t scale;
    int32_t disp;
} MemVariant;

static const MemVariant mem_variants[] = {
    { SpasmRegister_x86_64_RAX, SpasmRegister_x86_64_NONE, 1, 0 },
    { SpasmRegister_x86_64_RBX, SpasmRegister_x86_64_NONE, 1, 8 },
    { SpasmRegister_x86_64_R12, SpasmRegister_x86_64_NONE, 1, 0 },
    { SpasmRegister_x86_64_R13, SpasmRegister_x86_64_NONE, 1, 0 },
    { SpasmRegister_x86_64_RSP, SpasmRegister_x86_64_NONE, 1, 0x100 },
    { SpasmRegister_x86_64_RBP, SpasmRegister_x86_64_RCX, 4, -8 },
    { SpasmRegister_x86_64_R9, SpasmRegister_x86_64_R10, 8, 0x12345 },
    { SpasmRegister_x86_64_RIP, SpasmRegister_x86_64_NONE, 1, 0x40 },
    { SpasmRegister_x86_64_NONE, SpasmRegister_x86_64_NONE, 1, 0x1000 },
    { SpasmRegister_x86_64_NONE, SpasmRegister_x86_64_RCX, 2, 0x10 },
    { SpasmRegister_x86_64_RBP, SpasmRegister_x86_64_NONE, 1, 0 },
    { SpasmRegister_x86_64_R13, SpasmRegister_x86_64_R12, 2, 0 },
    { SpasmRegister_x86_64_R12, SpasmRegister_x86_64_R15, 1, -128 },
    { SpasmRegister_x86_64_RSP, SpasmRegister_x86_64_RAX, 1, 127 },
    /* 32-bit addressing (67 prefix) */
    { SpasmRegister_x86_64_EAX, SpasmRegister_x86_64_NONE, 1, 0 },
    { SpasmRegister_x86_64_ESP, SpasmRegister_x86_64_NONE, 1, 0x100 },
    { SpasmRegister_x86_64_R13D, SpasmRegister_x86_64_NONE, 1, 0 },
    { SpasmRegister_x86_64_EBP, SpasmRegister_x86_64_ECX, 4, -8 },
    { SpasmRegister_x86_64_R9D, SpasmRegister_x86_64_R12D, 8, 0x12345 },
    { SpasmRegister_x86_64_EIP, SpasmRegister_x86_64_NONE, 1, 0x40 },
    { SpasmRegister_x86_64_NONE, SpasmRegister_x86_64_ECX, 2, 0x10 },
    /* Invalid: mixed address sizes, eip with an index */
    { SpasmRegister_x86_64_RAX, SpasmRegister_x86_64_ECX, 2, 0 },
    { SpasmRegister_x86_64_EAX, SpasmRegister_x86_64_RCX, 1, 8 },
    { SpasmRegister_x86_64_EIP, SpasmRegister_x86_64_ECX, 1, 0 },
};

static const MemVariant vsib_variants[] = {
    { SpasmRegister_x86_64_RAX, 2, 4, 8 },
    { SpasmRegister_x86_64_R9, 10, 8, 0 },
    { SpasmRegister_x86_64_RSP, 1, 1, 0 },
    { SpasmRegister_x86_64_R13, 15, 2, 0x400 },
    { SpasmRegister_x86_64_RBP, 0, 4, 0 },
    { SpasmRegister_x86_64_EAX, 3, 4, 8 },
    { SpasmRegister_x86_64_RAX, 20, 4, 64 },
    { SpasmRegister_x86_64_R12, 31, 8, -256 },
};

/* Neighbours are used together: sil/bh, bh/r9b and ah/r15b are invalid combinations */
static const SpasmRegister r8_variants[] = {
    SpasmRegister_x86_64_CL, SpasmRegister_x86_64_SIL, SpasmRegister_x86_64_BH, SpasmRegister_x86_64_R9B,
    SpasmRegister_x86_64_AL, SpasmRegister_x86_64_AH, SpasmRegister_x86_64_R15B, SpasmRegister_x86_64_DL,
};

static const SpasmRegister r16_variants[] = {
    SpasmRegister_x86_64_CX, SpasmRegister_x86_64_SI, SpasmRegister_x86_64_R9W,
    SpasmRegister_x86_64_AX, SpasmRegister_x86_64_R15W, SpasmRegister_x86_64_SP,
};

static const SpasmRegister r32_variants[] = {
    SpasmRegister_x86_64_ECX, SpasmRegister_x86_64_ESI, SpasmRegister_x86_64_R9D,
    SpasmRegister_x86_64_EAX, SpasmRegister_x86_64_R12D, SpasmRegister_x86_64_EBP,
};

static const SpasmRegister r64_variants[] = {
    SpasmRegister_x86_64_RCX, SpasmRegister_x86_64_RSI, SpasmRegister_x86_64_R9,
    SpasmRegister_x86_64_RAX, SpasmRegister_x86_64_R12, SpasmRegister_x86_64_RSP,
};

/* 16-31 need EVEX: legacy forms reject them, VEX ones fall back to their EVEX twin */
static const uint8_t vector_variants[] = { 1, 9, 0, 15, 4, 12, 17, 31 };

static const SpasmRegister k_variants[] = {
    SpasmRegister_x86_64_K1, SpasmRegister_x86_64_K2, SpasmRegister_x86_64_K7,
    SpasmRegister_x86_64_K0, SpasmRegister_x86_64_K5, SpasmRegister_x86_64_K3,
};

static const char* rounding_names[] = { "{rn-sae}", "{rd-sae}", "{ru-sae}", "{rz-sae}", "{sae}" };

static const int64_t imm8_variants[] = { 5, -3, 0x7F, 1, -128, 0x40, 200 };
static const int64_t imm16_variants[] = { 0x1234, -2, 5, 0x7FFF, -300, 0x100 };
static const int64_t imm32_variants[] = { 0x12345678, -0x1000, 5, -1, 0x7FFFFFFF, 0x80 };
static const int64_t imm64_variants[] = { 0x1122334455667788LL, 5, -2, 0x100000000LL, 0x7FFFFFFF, -0x80000001LL };

#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))
#define VARIANT(array, i) (array[(i) % ARRAY_SIZE(array)])

static uint32_t variants_size(Spasm_x86_64_OperandKind kind)
{
    switch(kind)
    {
        case Spasm_x86_64_OperandKind_R8: return (uint32_t)ARRAY_SIZE(r8_variants);
        case Spasm_x86_64_OperandKind_XMM:
        case Spasm_x86_64_OperandKind_YMM:
        case Spasm_x86_64_OperandKind_ZMM:
            return (uint32_t)ARRAY_SIZE(vector_variants);
        case Spasm_x86_64_OperandKind_VM32Z:
        case Spasm_x86_64_OperandKind_VM64Z:
        case Spasm_x86_64_OperandKind_IMM8: return (uint32_t)ARRAY_SIZE(imm8_variants);
        case Spasm_x86_64_OperandKind_VM32X:
        case Spasm_x86_64_OperandKind_VM32Y:
        case Spasm_x86_64_OperandKind_VM64X:
        case Spasm_x86_64_OperandKind_VM64Y:
            return (uint32_t)ARRAY_SIZE(vsib_variants);
        case Spasm_x86_64_OperandKind_M:
        case Spasm_x86_64_OperandKind_M8:
        case Spasm_x86_64_OperandKind_M16:
        case Spasm_x86_64_OperandKind_M32:
        case Spasm_x86_64_OperandKind_M64:
        case Spasm_x86_64_OperandKind_M128:
        case Spasm_x86_64_OperandKind_M256:
        case Spasm_x86_64_OperandKind_M512:
            return (uint32_t)ARRAY_SIZE(mem_variants);
        default:
            return 6;
    }
}

/* Enough operand sets to go through every variant of every operand of the form */
static uint32_t variants_count(const Spasm_x86_64_Form* form)
{
    uint32_t count = 0;

    for(uint32_t i = 0; i < 4 && form->operands[i] != Spasm_x86_64_OperandKind_NONE; i++)
    {
        const uint32_t size = variants_size((Spasm_x86_64_OperandKind)form->operands[i]);
        count = size > count ? size : count;
    }

    /* The rounding operand is on every third variant, go through the 4 modes with each mask variant */
    if((form->evex & Spasm_x86_64_EvexFlag_ER) && count < 24)
        count = 24;

    return count > 0 ? count : 1;
}

static size_t format_register(SpasmRegister reg, char* buf, size_t buf_sz)
{
    return (size_t)snprintf(buf, buf_sz, "%s", spasm_x86_64_get_register_as_string(reg));
}

static const char* memory_size_prefix(Spasm_x86_64_OperandKind kind)
{
    switch(kind)
    {
        case Spasm_x86_64_OperandKind_M8: return "byte ptr ";
        case Spasm_x86_64_OperandKind_M16: return "word ptr ";
        case Spasm_x86_64_OperandKind_M32: return "dword ptr ";
        case Spasm_x86_64_OperandKind_M64: return "qword ptr ";
        case Spasm_x86_64_OperandKind_M128: return "xmmword ptr ";
        case Spasm_x86_64_OperandKind_M256: return "ymmword ptr ";
        case Spasm_x86_64_OperandKind_M512: return "zmmword ptr ";
        default: return "";
    }
}

static uint8_t memory_size(Spasm_x86_64_OperandKind kind)
{
    switch(kind)
    {
        case Spasm_x86_64_OperandKind_M8: return 1;
        case Spasm_x86_64_OperandKind_M16: return 2;
        case Spasm_x86_64_OperandKind_M32: return 4;
        case Spasm_x86_64_OperandKind_M64: return 8;
        case Spasm_x86_64_OperandKind_M128: return 16;
        case Spasm_x86_64_OperandKind_M256: return 32;
        case Spasm_x86_64_OperandKind_M512: return 64;
        default: return 0;
    }
}

static size_t format_memory(const SpasmOperand* op, Spasm_x86_64_OperandKind kind, char* buf, size_t buf_sz)
{
    size_t sz = (size_t)snprintf(buf, buf_sz, "%s[", memory_size_prefix(kind));
    bool has_term = false;

    if(op->mem_reg != SpasmRegister_x86_64_NONE)
    {
        sz += format_register(op->mem_reg, buf + sz, buf_sz - sz);
        has_term = true;
    }

    if(op->mem_index != SpasmRegister_x86_64_NONE)
    {
        sz += (size_t)snprintf(buf + sz, buf_sz - sz, "%s", has_term ? " + " : "");
        sz += format_register(op->mem_index, buf + sz, buf_sz - sz);
        sz += (size_t)snprintf(buf + sz, buf_sz - sz, "*%u", (uint32_t)op->mem_scale);
        has_term = true;
    }

    if(!has_term)
        sz += (size_t)snprintf(buf + sz, buf_sz - sz, "%d", op->mem_displacement);
    else if(op->mem_displacement > 0)
        sz += (size_t)snprintf(buf + sz, buf_sz - sz, " + %d", op->mem_displacement);
    else if(op->mem_displacement < 0)
        sz += (size_t)snprintf(buf + sz, buf_sz - sz, " - %d", -op->mem_displacement);

    sz += (size_t)snprintf(buf + sz, buf_sz - sz, "]");

    return sz;
}

static SpasmOperand make_register(SpasmRegister reg)
{
    SpasmOperand op;
    memset(&op, 0, sizeof(SpasmOperand));
    op.type = SpasmOperandType_Register;
    op.reg = (uint8_t)reg;

    return op;
}

static SpasmOperand make_memory(const MemVariant* variant, SpasmRegister index, uint8_t size)
{
    SpasmOperand op;
    memset(&op, 0, sizeof(SpasmOperand));
    op.type = SpasmOperandType_Mem;
    op.mem_reg = (uint8_t)variant->base;
    op.mem_index = (uint8_t)index;
    op.mem_scale = variant->scale;
    op.mem_displacement = variant->disp;
    op.mem_size = size;

    return op;
}

static SpasmOperand make_immediate(SpasmOperandType type, int64_t value)
{
    SpasmOperand op;
    memset(&op, 0, sizeof(SpasmOperand));
    op.type = type;
    op.imm_value = value;

    return op;
}

/* Returns false when the operand kind is not tested (relative branches) */
static bool generate_operand(Spasm_x86_64_OperandKind kind,
                             uint32_t variant,
                             SpasmOperand* op,
                             char* text,
                             size_t text_sz)
{
    switch(kind)
    {
        case Spasm_x86_64_OperandKind_R8: *op = make_register(VARIANT(r8_variants, variant)); break;
        case Spasm_x86_64_OperandKind_R16: *op = make_register(VARIANT(r16_variants, variant)); break;
        case Spasm_x86_64_OperandKind_R32: *op = make_register(VARIANT(r32_variants, variant)); break;
        case Spasm_x86_64_OperandKind_R64: *op = make_register(VARIANT(r64_variants, variant)); break;
        case Spasm_x86_64_OperandKind_XMM:
            *op = make_register(SpasmRegister_x86_64_XMM0 + VARIANT(vector_variants, variant));
            break;
        case Spasm_x86_64_OperandKind_YMM:
            *op = make_register(SpasmRegister_x86_64_YMM0 + VARIANT(vector_variants, variant));
            break;
        case Spasm_x86_64_OperandKind_ZMM:
            *op = make_register(SpasmRegister_x86_64_ZMM0 + VARIANT(vector_variants, variant));
            break;
        case Spasm_x86_64_OperandKind_K: *op = make_register(VARIANT(k_variants, variant)); break;
        case Spasm_x86_64_OperandKind_AL: *op = make_register(SpasmRegister_x86_64_AL); break;
        case Spasm_x86_64_OperandKind_AX: *op = make_register(SpasmRegister_x86_64_AX); break;
        case Spasm_x86_64_OperandKind_EAX: *op = make_register(SpasmRegister_x86_64_EAX); break;
        case Spasm_x86_64_OperandKind_RAX: *op = make_register(SpasmRegister_x86_64_RAX); break;
        case Spasm_x86_64_OperandKind_CL: *op = make_register(SpasmRegister_x86_64_CL); break;
        case Spasm_x86_64_OperandKind_XMM0: *op = make_register(SpasmRegister_x86_64_XMM0); break;

        case Spasm_x86_64_OperandKind_M:
        case Spasm_x86_64_OperandKind_M8:
        case Spasm_x86_64_OperandKind_M16:
        case Spasm_x86_64_OperandKind_M32:
        case Spasm_x86_64_OperandKind_M64:
        case Spasm_x86_64_OperandKind_M128:
        case Spasm_x86_64_OperandKind_M256:
        case Spasm_x86_64_OperandKind_M512:
        {
            const MemVariant* mem = &VARIANT(mem_variants, variant);
            *op = make_memory(mem, mem->index, memory_size(kind));
            format_memory(op, kind, text, text_sz);
            return true;
        }

        case Spasm_x86_64_OperandKind_VM32X:
        case Spasm_x86_64_OperandKind_VM64X:
        case Spasm_x86_64_OperandKind_VM32Y:
        case Spasm_x86_64_OperandKind_VM64Y:
        case Spasm_x86_64_OperandKind_VM32Z:
        case Spasm_x86_64_OperandKind_VM64Z:
        {
            const bool is_ymm = kind == Spasm_x86_64_OperandKind_VM32Y || kind == Spasm_x86_64_OperandKind_VM64Y;
            const bool is_zmm = kind == Spasm_x86_64_OperandKind_VM32Z || kind == Spasm_x86_64_OperandKind_VM64Z;
            const MemVariant* mem = &VARIANT(vsib_variants, variant);
            const SpasmRegister index = (is_zmm ? SpasmRegister_x86_64_ZMM0 :
                                         is_ymm ? SpasmRegister_x86_64_YMM0 :
                                                  SpasmRegister_x86_64_XMM0) + mem->index;
            *op = make_memory(mem, index, 0);
            format_memory(op, kind, text, text_sz);
            return true;
        }

        case Spasm_x86_64_OperandKind_IMM8: *op = make_immediate(SpasmOperandType_Imm8, VARIANT(imm8_variants, variant)); break;
        case Spasm_x86_64_OperandKind_IMM16: *op = make_immediate(SpasmOperandType_Imm16, VARIANT(imm16_variants, variant)); break;
        case Spasm_x86_64_OperandKind_IMM32: *op = make_immediate(SpasmOperandType_Imm32, VARIANT(imm32_variants, variant)); break;
        case Spasm_x86_64_OperandKind_IMM64: *op = make_immediate(SpasmOperandType_Imm64, VARIANT(imm64_variants, variant)); break;
        case Spasm_x86_64_OperandKind_ONE: *op = make_immediate(SpasmOperandType_Imm8, 1); break;
        case Spasm_x86_64_OperandKind_THREE: *op = make_immediate(SpasmOperandType_Imm8, 3); break;

        default:
            return false;
    }

    if(op->type == SpasmOperandType_Register)
        format_register(op->reg, text, text_sz);
    else
        snprintf(text, text_sz, "%lld", (long long)op->imm_value);

    return true;
}

/*
    Opmask on the destination of the forms accepting one: none, {k1}, {k7} {z} and {k0}. {k0} is
    not a write mask, zeroing is only valid on registers and gathers/scatters need a mask: those
    must be rejected by both sides
*/
static void apply_mask(const Spasm_x86_64_Form* form, uint32_t variant, SpasmOperand* op, char* text, size_t text_sz)
{
    if(!(form->evex & Spasm_x86_64_EvexFlag_MASK))
        return;

    const size_t sz = strlen(text);

    switch(variant % 4)
    {
        case 1:
            op->mask = SpasmRegister_x86_64_K1;
            snprintf(text + sz, text_sz - sz, " {k1}");
            break;
        case 2:
            op->mask = SpasmRegister_x86_64_K7;
            op->zeroing = (form->evex & Spasm_x86_64_EvexFlag_ZEROING) != 0;
            snprintf(text + sz, text_sz - sz, op->zeroing ? " {k7} {z}" : " {k7}");
            break;
        case 3:
            op->mask = SpasmRegister_x86_64_K0;
            snprintf(text + sz, text_sz - sz, " {k0}");
            break;
        default:
            break;
    }
}

/* Every other variant of the forms with a broadcast memory operand uses one broadcast element */
static void apply_broadcast(const Spasm_x86_64_Form* form,
                            uint32_t variant,
                            Spasm_x86_64_OperandKind kind,
                            SpasmOperand* op,
                            char* text,
                            size_t text_sz)
{
    if(!(form->evex & Spasm_x86_64_EvexFlag_BCST) || op->type != SpasmOperandType_Mem || variant % 2 == 0)
        return;

    const uint8_t element_size = (form->flags & Spasm_x86_64_FormFlag_W) ? 8 : 4;

    op->mem_broadcast = (uint8_t)(memory_size(kind) / element_size);
    op->mem_size = element_size;

    const size_t sz = format_memory(op,
                                    element_size == 4 ? Spasm_x86_64_OperandKind_M32 : Spasm_x86_64_OperandKind_M64,
                                    text,
                                    text_sz);

    snprintf(text + sz, text_sz - sz, "{1to%u}", (uint32_t)(memory_size(kind) / element_size));
}

int main(void)
{
    for(size_t m = 0; m < spasm_x86_64_mnemonics_count(); m++)
    {
        const char* name;
        const Spasm_x86_64_MnemonicKeyword* keyword = spasm_x86_64_mnemonic_at(m, &name);

        for(uint32_t f = keyword->first; f < (uint32_t)(keyword->first + keyword->count); f++)
        {
            const Spasm_x86_64_Form* form = &spasm_x86_64_forms[f];

            const uint32_t num_variants = variants_count(form);

            for(uint32_t v = 0; v < num_variants; v++)
            {
                SpasmOperand operands[5];
                char texts[5][96];
                uint8_t num_operands = 0;
                bool supported = true;

                while(num_operands < 4 && form->operands[num_operands] != Spasm_x86_64_OperandKind_NONE)
                {
                    supported &= generate_operand((Spasm_x86_64_OperandKind)form->operands[num_operands],
                                                  v + num_operands,
                                                  &operands[num_operands],
                                                  texts[num_operands],
                                                  sizeof(texts[num_operands]));
                    num_operands++;
                }

                if(!supported)
                    break;

                for(uint8_t i = 0; i < num_operands; i++)
                    apply_broadcast(form, v, (Spasm_x86_64_OperandKind)form->operands[i], &operands[i],
                                    texts[i], sizeof(texts[i]));

                if(num_operands > 0)
                    apply_mask(form, v, &operands[0], texts[0], sizeof(texts[0]));

                /* Every third variant of the forms accepting it has a rounding operand, before the imm8 */
                if((form->evex & (Spasm_x86_64_EvexFlag_ER | Spasm_x86_64_EvexFlag_SAE)) && v % 3 == 1)
                {
                    uint8_t position = 0;

                    while(position < num_operands && form->operands[position] != Spasm_x86_64_OperandKind_IMM8)
                        position++;

                    for(uint8_t i = num_operands; i > position; i--)
                    {
                        operands[i] = operands[i - 1];
                        memcpy(texts[i], texts[i - 1], sizeof(texts[i]));
                    }

                    memset(&operands[position], 0, sizeof(SpasmOperand));
                    operands[position].type = SpasmOperandType_Rounding;
                    operands[position].imm_value = (form->evex & Spasm_x86_64_EvexFlag_ER) ? (int64_t)((v / 3 + v / 12) % 4) :
                                                                                             SpasmRounding_SAE;
                    snprintf(texts[position], sizeof(texts[position]), "%s", rounding_names[operands[position].imm_value]);
                    num_operands++;
                }

                /* llvm-mc wants the rounding operand before a general purpose source (vcvtsi2ss) */
                uint8_t text_order[5] = { 0, 1, 2, 3, 4 };

                for(uint8_t i = 1; i < num_operands; i++)
                {
                    if(operands[i].type == SpasmOperandType_Rounding &&
                       operands[i - 1].type == SpasmOperandType_Register &&
                       operands[i - 1].reg >= SpasmRegister_x86_64_EAX &&
                       operands[i - 1].reg <= SpasmRegister_x86_64_R15)
                    {
                        text_order[i - 1] = i;
                        text_order[i] = i - 1;
                    }
                }

                char line[512];
                size_t line_sz = (size_t)snprintf(line, sizeof(line), "%s", name);

                for(uint8_t i = 0; i < num_operands; i++)
                    line_sz += (size_t)snprintf(line + line_sz,
                                                sizeof(line) - line_sz,
                                                "%s%s",
                                                i == 0 ? " " : ", ",
                                                texts[text_order[i]]);

                SpasmInstruction instr;
                memset(&instr, 0, sizeof(SpasmInstruction));
                instr.mnemonic = name;
                instr.mnemonic_len = (uint8_t)strlen(name);
                instr.operands = operands;
                instr.num_operands = num_operands;

                SpasmByteCode bytecode = spasm_bytecode_new();

                printf("%s\t", line);

                if(spasm_x86_64_encode_instruction(&instr, &bytecode))
                {
                    size_t sz;
                    const SpasmByte* bytes = spasm_bytecode_get(&bytecode, &sz);

                    for(size_t i = 0; i < sz; i++)
                        printf("%02x", bytes[i]);

                    printf("\n");
                }
                else
                {
                    printf("ERROR\n");
                }

                spasm_bytecode_destroy(&bytecode);
            }
        }
    }

    return 0;
}

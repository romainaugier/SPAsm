/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_OPERAND)
#define __SPASM_OPERAND

#include "spasm/common.h"

typedef enum
{
    SpasmOperandType_None,
    SpasmOperandType_Register,
    SpasmOperandType_Mem,
    SpasmOperandType_Imm8,
    SpasmOperandType_Imm16,
    SpasmOperandType_Imm32,
    SpasmOperandType_Imm64,
    SpasmOperandType_Data,
    SpasmOperandType_Symbol,
} SpasmOperandType;

/*
    Operand is 128 bits. Maybe we can limit imm_value to be 56 bits and pack an operand into 64 bits,
    or find a way to encode the 64 bits imm_value better
*/
typedef struct
{
    SpasmOperandType type;

    union {
        int64_t imm_value;
    };

    union {
        uint8_t reg;
    };

    /* The immediate keeps the width of its type instead of the shortest one (e.g. relocations) */
    bool imm_fixed;

    union { struct {
        uint8_t mem_reg;
        uint8_t mem_index;
        int32_t mem_displacement;
        uint8_t mem_scale;
        uint8_t mem_size; /* In bytes, 0 when not specified */
    }; };

    union {
        const char* data_id;
    };

    union {
        const char* symbol_name;
    };

} SpasmOperand;

#define SpasmOpImm8(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm8,      \
    .imm_value = (int64_t)(val)})

#define SpasmOpImm16(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm16,      \
    .imm_value = (int64_t)(val)})

#define SpasmOpImm32(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm32,      \
    .imm_value = (int64_t)(val)})

#define SpasmOpImm64(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm64,      \
    .imm_value = (int64_t)(val)})

/*
    By default the encoder picks the shortest immediate that holds the value (add rax, 5 uses the
    sign-extended imm8 form whatever the operand type). Fixed immediates keep their width, for values
    patched later
*/
#define SpasmOpImmFixed8(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm8,           \
    .imm_value = (int64_t)(val),             \
    .imm_fixed = true})

#define SpasmOpImmFixed16(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm16,           \
    .imm_value = (int64_t)(val),              \
    .imm_fixed = true})

#define SpasmOpImmFixed32(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm32,           \
    .imm_value = (int64_t)(val),              \
    .imm_fixed = true})

#define SpasmOpImmFixed64(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm64,           \
    .imm_value = (int64_t)(val),              \
    .imm_fixed = true})

#define SpasmOpReg(r) ((SpasmOperand){   \
    .type = SpasmOperandType_Register, \
    .reg = (uint8_t)(r)})

#define SpasmOpScalar(r) ((SpasmOperand){ \
    .type = SpasmOperandType_Register,    \
    .reg = (uint8_t)(r)})

#define SpasmOpVector(r) ((SpasmOperand){ \
    .type = SpasmOperandType_Register,    \
    .reg = (uint8_t)(r)})

#define SpasmOpOPMask(r) ((SpasmOperand){ \
    .type = SpasmOperandType_Vector,    \
    .reg = (uint8_t)(r)})

/*
    [r + idx * scale + disp], r and idx can be 0 (none), r can be rip.
    The size is deduced from the other operands, use the sized variants when it can't be
    (e.g. add qword ptr [rax], 1)
*/
#define SpasmOpMemory(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 0)

#define SpasmOpMemorySized(r, idx, disp, scale, size) ((SpasmOperand){ \
    .type = SpasmOperandType_Mem,                                    \
    .mem_reg = (uint8_t)(r),                                         \
    .mem_index = (uint8_t)(idx),                                     \
    .mem_displacement = (int32_t)(disp),                             \
    .mem_scale = (uint8_t)(scale),                                   \
    .mem_size = (uint8_t)(size)})

#define SpasmOpMemByte(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 1)
#define SpasmOpMemWord(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 2)
#define SpasmOpMemDword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 4)
#define SpasmOpMemQword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 8)
#define SpasmOpMemXmmword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 16)
#define SpasmOpMemYmmword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 32)

#define SpasmOpData(id) ((SpasmOperand){ \
    .type = SpasmOperandType_Data,     \
    .data_id = (const char*)(id)})

#define SpasmOpSymbol(name) ((SpasmOperand){ \
    .type = SpasmOperandType_Symbol,       \
    .symbol_name = (const char*)(name)})

#endif /* !defined(__SPASM_OPERAND) */

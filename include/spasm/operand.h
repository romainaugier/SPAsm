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

    union {
        uint8_t mem_reg;
        uint8_t mem_index;
        int32_t mem_displacement;
        uint8_t mem_scale;
    };

} SpasmOperand;

#define SpasmImm8(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm8,      \
    .imm_value = (int64_t)(val)})

#define SpasmImm16(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm16,      \
    .imm_value = (int64_t)(val)})

#define SpasmImm32(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm32,      \
    .imm_value = (int64_t)(val)})

#define SpasmImm64(val) ((SpasmOperand){ \
    .type = SpasmOperandType_Imm64,      \
    .imm_value = (int64_t)(val)})

#define SpasmReg(r) ((SpasmOperand){   \
    .type = SpasmOperandType_Register, \
    .reg = (uint8_t)(r)})

#define SpasmScalar(r) ((SpasmOperand){ \
    .type = SpasmOperandType_Scalar,    \
    .reg = (uint8_t)(r)})

#define SpasmVector(r) ((SpasmOperand){ \
    .type = SpasmOperandType_Vector,    \
    .reg = (uint8_t)(r)})

#define SpasmOPMask(r) ((SpasmOperand){ \
    .type = SpasmOperandType_Vector,    \
    .reg = (uint8_t)(r)})

#define SpasmMemory(r, idx, disp, scale) ((SpasmOperand){ \
    .type = SpasmOperandType_Mem,                         \
    .mem_reg = (uint8_t)(r),                              \
    .mem_index = (uint8_t)(idx),                          \
    .mem_displacement = (int32_t)(disp),                  \
    .mem_scale = (uint8_t)(scale)})

#endif /* !defined(__SPASM_OPERAND) */
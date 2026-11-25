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
    SpasmOperandType_Rounding,
} SpasmOperandType;

/* AVX-512 embedded rounding ({rn-sae}...) and suppress-all-exceptions ({sae}) */
typedef enum
{
    SpasmRounding_Nearest,
    SpasmRounding_Down,
    SpasmRounding_Up,
    SpasmRounding_Zero,
    SpasmRounding_SAE,
} SpasmRounding;

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

    /* AVX-512 opmask of the destination operand ({k1}-{k7}), 0 when not masked */
    uint8_t mask;

    /* Zeroing-masking ({z}) instead of merging-masking, register destinations only */
    bool zeroing;

    union { struct {
        uint8_t mem_reg;
        uint8_t mem_index;
        bool mem_disp32; /* Always encode the displacement on 32 bits (patched later, e.g. symbols) */
        int32_t mem_displacement;
        uint8_t mem_scale;
        uint8_t mem_size; /* In bytes, 0 when not specified. The element size when broadcast */
        uint8_t mem_broadcast; /* AVX-512 embedded broadcast ({1toN}): N, 0 when not broadcast */
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

/* AVX-512 masked destinations, k is SpasmRegister_x86_64_K1-K7 */
#define SpasmOpRegMask(r, k) ((SpasmOperand){ \
    .type = SpasmOperandType_Register,     \
    .reg = (uint8_t)(r),                   \
    .mask = (uint8_t)(k)})

#define SpasmOpRegMaskZ(r, k) ((SpasmOperand){ \
    .type = SpasmOperandType_Register,      \
    .reg = (uint8_t)(r),                    \
    .mask = (uint8_t)(k),                   \
    .zeroing = true})

#define SpasmOpMemoryMask(r, idx, disp, scale, size, k) ((SpasmOperand){ \
    .type = SpasmOperandType_Mem,                                      \
    .mem_reg = (uint8_t)(r),                                           \
    .mem_index = (uint8_t)(idx),                                       \
    .mem_displacement = (int32_t)(disp),                               \
    .mem_scale = (uint8_t)(scale),                                     \
    .mem_size = (uint8_t)(size),                                       \
    .mask = (uint8_t)(k)})

/*
    AVX-512 embedded broadcast: one element_size element of [r + idx * scale + disp] broadcast to
    count elements ({1tocount}), e.g. dword ptr [rax]{1to16} is (RAX, 0, 0, 1, 4, 16)
*/
#define SpasmOpMemoryBroadcast(r, idx, disp, scale, element_size, count) ((SpasmOperand){ \
    .type = SpasmOperandType_Mem,                                                       \
    .mem_reg = (uint8_t)(r),                                                            \
    .mem_index = (uint8_t)(idx),                                                        \
    .mem_displacement = (int32_t)(disp),                                                \
    .mem_scale = (uint8_t)(scale),                                                      \
    .mem_size = (uint8_t)(element_size),                                                \
    .mem_broadcast = (uint8_t)(count)})

/* AVX-512 embedded rounding/suppress-all-exceptions operand ({rn-sae}, {sae}...) */
#define SpasmOpRounding(mode) ((SpasmOperand){ \
    .type = SpasmOperandType_Rounding,      \
    .imm_value = (int64_t)(mode)})

#define SpasmOpSae() SpasmOpRounding(SpasmRounding_SAE)

#define SpasmOpMemByte(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 1)
#define SpasmOpMemWord(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 2)
#define SpasmOpMemDword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 4)
#define SpasmOpMemQword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 8)
#define SpasmOpMemXmmword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 16)
#define SpasmOpMemYmmword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 32)
#define SpasmOpMemZmmword(r, idx, disp, scale) SpasmOpMemorySized(r, idx, disp, scale, 64)

#define SpasmOpData(id) ((SpasmOperand){ \
    .type = SpasmOperandType_Data,     \
    .data_id = (const char*)(id)})

#define SpasmOpSymbol(name) ((SpasmOperand){ \
    .type = SpasmOperandType_Symbol,       \
    .symbol_name = (const char*)(name)})

/* The address of a symbol plus offset (mov rax, table + 8) */
#define SpasmOpSymbolOffset(name, offset) ((SpasmOperand){ \
    .type = SpasmOperandType_Symbol,                     \
    .imm_value = (int64_t)(offset),                      \
    .symbol_name = (const char*)(name)})

#endif /* !defined(__SPASM_OPERAND) */

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_INSTRUCTION)
#define __SPASM_INSTRUCTION

#include "spasm/operand.h"
#include "spasm/args_count.h"
#include "spasm/abi.h"

#include "libromano/arena.h"
#include "libromano/vector.h"

typedef SPASM_PACKED_STRUCT(struct
{
    const char* mnemonic;
    SpasmOperand* operands;
    uint8_t mnemonic_len;
    uint8_t num_operands;
}) SpasmInstruction;

typedef struct
{
    Vector instructions;
    Arena instructions_data;
} SpasmInstructions;

SPASM_API SpasmInstructions spasm_instructions_new(void);

/*
 * Returns NULL if no data operand is found
 */
SPASM_API SpasmOperand* spasm_instruction_has_operand_type(SpasmInstruction* instruction,
                                                           SpasmOperandType type);

/*
 * Returns NULL if no data operand is found
 */
SPASM_API SpasmOperand* spasm_instruction_has_data_operand(SpasmInstruction* instruction);

/*
 * Returns NULL if no symbol operand is found
 */
SPASM_API SpasmOperand* spasm_instruction_has_symbol_operand(SpasmInstruction* instruction);

/*
 * Implementation of the instruction_push_back, use the macro instead
 */
SPASM_API bool __spasm_instructions_push_back(SpasmInstructions* instructions,
                                              const char* mnemonic,
                                              uint8_t mnemonic_len,
                                              uint8_t num_operands,
                                              ...);

/*
 * Pushes an instruction (you need to pass the mnemonic length)
 */
#define spasm_instructions_push_backv(instructions, mnemonic, mnemonic_len, ...) \
    __spasm_instructions_push_back(instructions,                                 \
                                   mnemonic,                                     \
                                   (uint8_t)mnemonic_len,                        \
                                   (uint8_t)SPASM_NARG(__VA_ARGS__),             \
                                   __VA_ARGS__)

/*
 * Pushes an instruction (mnemonic length is calculated by strlen)
 */
#define spasm_instructions_push_back(instructions, mnemonic, ...)    \
    __spasm_instructions_push_back(instructions,                     \
                                   mnemonic,                         \
                                   (uint8_t)strlen(mnemonic),        \
                                   (uint8_t)SPASM_NARG(__VA_ARGS__), \
                                   __VA_ARGS__)

/*
 * Pushes and instruction without any operands
 */
#define spasm_instructions_push_backz(instructions, mnemonic)  \
     __spasm_instructions_push_back(instructions,              \
                                    mnemonic,                  \
                                    (uint8_t)strlen(mnemonic), \
                                    (uint8_t)0)

SPASM_API void spasm_instructions_debug(SpasmInstructions* instructions,
                                        SpasmABI abi,
                                        int32_t fd);

SPASM_API void spasm_instructions_destroy(SpasmInstructions* instructions);

#endif /* !defined(__SPASM_INSTRUCTION) */

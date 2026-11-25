/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/abi.h"
#include "spasm/common.h"
#include "spasm/operand.h"
#include "spasm/instruction.h"
#include "spasm/error.h"

#if defined(SPASM_ENABLE_X86_64)
#include "spasm/x86_64.h"
#endif /* defined(SPASM_ENABLE_X86_64) */

#include "libromano/arena.h"
#include "libromano/vector.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#if defined(SPASM_MSVC)
#include <io.h>
#elif defined(SPASM_GCC)
#include <unistd.h>
#endif /* defined(SPASM_MSVC) */

/* Ctor/ Dtor */

SpasmInstructions spasm_instructions_new(void)
{
    SpasmInstructions instructions;
    vector_init(&instructions.instructions, 32, sizeof(SpasmInstruction*));
    arena_init(&instructions.instructions_data, ARENA_BLOCK_SIZE);

    return instructions;
}

SpasmOperand* spasm_instruction_has_operand_type(SpasmInstruction* instruction,
                                                 SpasmOperandType type)
{
    for(uint8_t i = 0; i < instruction->num_operands; i++)
    {
        SpasmOperand* operand = &instruction->operands[i];

        if(operand->type == type)
            return operand;
    }

    return NULL;
}

SpasmOperand* spasm_instruction_has_data_operand(SpasmInstruction* instruction)
{
    return spasm_instruction_has_operand_type(instruction, SpasmOperandType_Data);
}

SpasmOperand* spasm_instruction_has_symbol_operand(SpasmInstruction* instruction)
{
    return spasm_instruction_has_operand_type(instruction, SpasmOperandType_Symbol);
}

void spasm_instructions_destroy(SpasmInstructions* instructions)
{
    vector_release(&instructions->instructions);
    arena_release(&instructions->instructions_data);
}

/* Push back function to add instructions, does most of the job */

/* TODO: add num operands check per instruction to validate */

/* The arena does not align its blocks: every push is rounded to 8 bytes to keep operands aligned */
static SPASM_FORCE_INLINE size_t spasm_instructions_align(size_t size)
{
    return (size + 7) & ~(size_t)7;
}

bool spasm_mnemonic_exists(const char* mnemonic, size_t mnemonic_len)
{
#if defined(SPASM_ENABLE_X86_64)
    if(spasm_x86_64_mnemonic_lookup(mnemonic, mnemonic_len) != NULL)
        return true;
#endif /* defined(SPASM_ENABLE_X86_64) */

    return false;
}

size_t spasm_instructions_size(SpasmInstructions* instructions)
{
    return vector_size(&instructions->instructions);
}

SpasmInstruction* spasm_instructions_at(SpasmInstructions* instructions, size_t index)
{
    return *(SpasmInstruction**)vector_at(&instructions->instructions, index);
}

const char* spasm_instructions_copy_string(SpasmInstructions* instructions,
                                           const char* s,
                                           size_t s_len)
{
    char* copy = (char*)arena_push(&instructions->instructions_data, NULL, spasm_instructions_align(s_len + 1));

    memcpy(copy, s, s_len);
    copy[s_len] = '\0';

    return copy;
}

static SpasmInstruction* spasm_instructions_push_kind(SpasmInstructions* instructions,
                                                      SpasmInstructionKind kind,
                                                      const char* mnemonic,
                                                      size_t mnemonic_len,
                                                      const SpasmOperand* operands,
                                                      uint8_t num_operands,
                                                      uint32_t line)
{
    if(mnemonic_len > UINT8_MAX)
    {
        spasm_error("%s is too long (%zu characters, at most 255): %.*s",
                    kind == SpasmInstructionKind_Label ? "Label" : "Mnemonic",
                    mnemonic_len,
                    (int)mnemonic_len,
                    mnemonic);
        return NULL;
    }

    const size_t header_size = spasm_instructions_align(sizeof(SpasmInstruction));

    char* block = (char*)arena_push(&instructions->instructions_data,
                                    NULL,
                                    header_size + num_operands * sizeof(SpasmOperand));

    SpasmInstruction* instr = (SpasmInstruction*)block;
    instr->mnemonic = spasm_instructions_copy_string(instructions, mnemonic, mnemonic_len);
    instr->mnemonic_len = (uint8_t)mnemonic_len;
    instr->operands = num_operands > 0 ? (SpasmOperand*)(block + header_size) : NULL;
    instr->num_operands = num_operands;
    instr->line = line;
    instr->kind = (uint8_t)kind;

    if(num_operands > 0)
        memcpy(instr->operands, operands, num_operands * sizeof(SpasmOperand));

    vector_push_back(&instructions->instructions, &instr);

    return instr;
}

SpasmInstruction* spasm_instructions_push(SpasmInstructions* instructions,
                                          const char* mnemonic,
                                          size_t mnemonic_len,
                                          const SpasmOperand* operands,
                                          uint8_t num_operands,
                                          uint32_t line)
{
    return spasm_instructions_push_kind(instructions,
                                        SpasmInstructionKind_Instruction,
                                        mnemonic,
                                        mnemonic_len,
                                        operands,
                                        num_operands,
                                        line);
}

SpasmInstruction* spasm_instructions_push_label(SpasmInstructions* instructions,
                                                const char* name,
                                                size_t name_len,
                                                uint32_t line)
{
    return spasm_instructions_push_kind(instructions,
                                        SpasmInstructionKind_Label,
                                        name,
                                        name_len,
                                        NULL,
                                        0,
                                        line);
}

bool __spasm_instructions_push_back(SpasmInstructions* instructions,
                                    const char* mnemonic,
                                    uint8_t mnemonic_len,
                                    uint8_t num_operands,
                                    ...)
{
    SpasmOperand operands[8];

    SPASM_ASSERT(num_operands <= 8, "Too many operands");

    va_list args;
    va_start(args, num_operands);

    for(uint8_t i = 0; i < num_operands; i++)
        operands[i] = va_arg(args, SpasmOperand);

    va_end(args);

    return spasm_instructions_push(instructions, mnemonic, mnemonic_len, operands, num_operands, 0) != NULL;
}

/* x86_64 */

#if defined(SPASM_ENABLE_X86_64)
extern void spasm_x86_64_instructions_debug(SpasmInstructions*, int32_t);
#endif /* defined(SPASM_ENABLE_X86_64) */

/* aarch64 */

#if defined(SPASM_ENABLE_AARCH64)
extern void spasm_aarch64_instructions_debug(SpasmInstructions*, int32_t);
#endif /* defined(SPASM_ENABLE_AARCH64) */

/* Debug */

void spasm_instructions_debug(SpasmInstructions* instructions,
                              SpasmABI abi,
                              int32_t fd)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64:
        case SpasmABI_LinuxX64:
        case SpasmABI_MacOSX64:
            spasm_x86_64_instructions_debug(instructions, fd);
            break;
#endif /* defined(SPASM_ENABLE_X86_64) */

#if defined(SPASM_ENABLE_AARCH64)
        case SpasmABI_MacOSAarch64:
            spasm_aarch64_instructions_debug(instructions, fd);
            break;
#endif /* defined(SPASM_ENABLE_AARCH64) */
        default:
            spasm_error("Cannot debug instructions: abi not supported");
#if defined(SPASM_MSVC)
            _write(fd, "spasm_instructions_debug error: abi not supported", 50);
#elif defined(SPASM_GCC) || defined(SPASM_CLANG)
            write(fd, "spasm_instructions_debug error: abi not supported", 50);
#endif /* defined(SPASM_MSVC) */
            break;
    }
}

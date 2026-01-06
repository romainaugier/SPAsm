/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/abi.h"
#include "spasm/common.h"
#include "spasm/operand.h"
#include "spasm/instruction.h"
#include "spasm/error.h"

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
    vector_init(&instructions.instructions, 32, sizeof(SpasmInstructions*));
    arena_init(&instructions.instructions_data, ARENA_BLOCK_SIZE);

    return instructions;
}

SpasmOperand* spasm_instruction_has_data_operand(SpasmInstruction* instruction)
{
    for(uint8_t i = 0; i < instruction->num_operands; i++)
    {
        SpasmOperand* operand = &instruction->operands[i];

        if(operand->type == SpasmOperandType_Data)
            return operand;
    }

    return NULL;
}

void spasm_instructions_destroy(SpasmInstructions* instructions)
{
    vector_release(&instructions->instructions);
    arena_release(&instructions->instructions_data);
}

/* Push back function to add instructions, does most of the job */

/* TODO: add num operands check per instruction to validate */

bool __spasm_instructions_push_back(SpasmInstructions* instructions,
                                    const char* mnemonic,
                                    uint8_t mnemonic_len,
                                    uint8_t num_operands,
                                    ...)
{
    va_list args;

    size_t total_byte_size = sizeof(SpasmInstructions) + num_operands * sizeof(SpasmOperand);

    void* block = arena_push(&instructions->instructions_data, NULL, total_byte_size);

    SpasmOperand* operand_block = NULL;

    if(num_operands > 0)
        operand_block = (SpasmOperand*)((char*)block + sizeof(SpasmInstruction));

    SpasmInstruction* instr = (SpasmInstruction*)block;
    instr->mnemonic = mnemonic;
    instr->mnemonic_len = mnemonic_len;
    instr->num_operands = num_operands;
    instr->operands = operand_block;

    va_start(args, num_operands);

    for(size_t i = 0; i < num_operands; i++)
    {
        SpasmOperand operand = va_arg(args, SpasmOperand);

        memcpy(&operand_block[i], &operand, sizeof(SpasmOperand));
    }

    va_end(args);

    vector_push_back(&instructions->instructions, &instr);

    return true;
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

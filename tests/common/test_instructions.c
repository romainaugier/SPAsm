/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/instruction.h"
#include "spasm/error.h"

#include <string.h>

int main(void)
{
    SpasmInstructions instructions = spasm_instructions_new();

    /* The source buffer is not null-terminated and does not need to outlive the instructions */
    char source[] = "loop: add";

    SPASM_ASSERT(spasm_instructions_push_label(&instructions, source, 4, 1) != NULL, "push label failed");

    const SpasmOperand operands[2] = { SpasmOpImm8(1), SpasmOpImm8(2) };

    for(uint32_t i = 0; i < 3; i++)
        SPASM_ASSERT(spasm_instructions_push(&instructions, source + 6, 3, operands, (uint8_t)(i % 3), 2 + i) != NULL,
                     "push failed");

    const char* symbol = spasm_instructions_copy_string(&instructions, source, 4);

    memset(source, 0, sizeof(source));

    SPASM_ASSERT(strcmp(symbol, "loop") == 0, "copied string mismatch");
    SPASM_ASSERT(spasm_instructions_size(&instructions) == 4, "wrong number of instructions");

    const SpasmInstruction* label = spasm_instructions_at(&instructions, 0);
    SPASM_ASSERT(label->kind == SpasmInstructionKind_Label, "not a label");
    SPASM_ASSERT(label->mnemonic_len == 4 && memcmp(label->mnemonic, "loop", 4) == 0, "label name mismatch");
    SPASM_ASSERT(label->mnemonic[4] == '\0', "label name is not null-terminated");
    SPASM_ASSERT(label->line == 1, "label line mismatch");

    for(size_t i = 1; i < 4; i++)
    {
        const SpasmInstruction* instr = spasm_instructions_at(&instructions, i);

        SPASM_ASSERT(instr->kind == SpasmInstructionKind_Instruction, "not an instruction");
        SPASM_ASSERT(strcmp(instr->mnemonic, "add") == 0, "mnemonic mismatch");
        SPASM_ASSERT(instr->num_operands == (i - 1) % 3, "operand count mismatch");
        SPASM_ASSERT(instr->line == 1 + i, "line mismatch");

        if(instr->num_operands > 0)
        {
            SPASM_ASSERT(((uintptr_t)instr->operands & 7) == 0, "operands are not aligned");
            SPASM_ASSERT(instr->operands[instr->num_operands - 1].imm_value == instr->num_operands, "operand mismatch");
        }
    }

    char long_name[300];
    memset(long_name, 'a', sizeof(long_name));

    SPASM_ASSERT(spasm_instructions_push_label(&instructions, long_name, sizeof(long_name), 5) == NULL,
                 "a label longer than 255 characters should be rejected");

    spasm_instructions_destroy(&instructions);

    return 0;
}

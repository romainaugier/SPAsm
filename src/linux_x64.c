/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/instruction.h"
#include "spasm/x86_64.h"
#include "spasm/data.h"

#if defined(SPASM_ENABLE_X86_64)

/* JIT Assembler */

bool spasm_linux_x64_jit(SpasmInstructions* instructions, SpasmByteCode* bytecode, SpasmData* data)
{
    (void)data;

    for(size_t i = 0; i < vector_size(&instructions->instructions); i++)
    {
        SpasmInstruction* instr = *(SpasmInstruction**)vector_at(&instructions->instructions, i);

        SpasmOperand* data_operand = spasm_instruction_has_data_operand(instr);

        if(data_operand != NULL)
        {
            SpasmDataId data_id = data_operand->data_id;

            data_operand->type = SpasmOperandType_Imm64;
            data_operand->imm_value = spasm_data_get_jit_address(data, data_id);
        }

        if(!spasm_x86_64_encode_instruction(instr, bytecode))
        {
            return false;
        }
    }

    return true;
}

#endif /* defined(SPASM_ENABLE_X86_64) */

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#if defined(SPASM_ENABLE_X86_64)

#include "spasm/x86_64.h"
#include "spasm/data.h"
#include "spasm/error.h"

/* Assembler */

bool spasm_windows_x64_assembler(SpasmInstructions* instructions,
                                 SpasmByteCode* bytecode,
                                 SpasmData* data)
{
    for(size_t i = 0; i < vector_size(&instructions->instructions); i++)
    {
        SpasmInstruction* instr = *(SpasmInstruction**)vector_at(&instructions->instructions, i);

        SpasmOperand* sym_op = spasm_instruction_has_symbol_operand(instr);
        const char* sym_name = NULL;

        if(sym_op != NULL)
        {
            sym_name = sym_op->symbol_name;

            sym_op->type = SpasmOperandType_Imm32;
            sym_op->imm_value = 0;
        }

        if(!spasm_x86_64_encode_instruction(instr, bytecode))
        {
            return false;
        }

        if(sym_name != NULL)
        {
            size_t offset = spasm_bytecode_size(bytecode) - 4;
            spasm_data_add_extern_symbol(data, sym_name, offset);
        }
    }

    if(spasm_data_num_exports(data) == 0)
    {
        spasm_warning("Could not find any exported symbol, adding symbol main starting at offset 0x0");

        spasm_data_add_export_symbol(data, "main", 0);
    }

    return true;
}

/* JIT Assembler */

bool spasm_windows_x64_jit(SpasmInstructions* instructions, SpasmByteCode* bytecode, SpasmData* data)
{
    (void)data;

    for(size_t i = 0; i < vector_size(&instructions->instructions); i++)
    {
        SpasmInstruction* instr = *(SpasmInstruction**)vector_at(&instructions->instructions, i);

        SpasmOperand* sym_op = spasm_instruction_has_symbol_operand(instr);

        if(sym_op != NULL)
        {

        }

        if(!spasm_x86_64_encode_instruction(instr, bytecode))
        {
            return false;
        }
    }

    return true;
}

#endif /* defined(SPASM_ENABLE_X86_64) */

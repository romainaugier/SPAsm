/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#if defined(SPASM_ENABLE_X86_64)

#include "spasm/x86_64.h"
#include "spasm/data.h"

bool spasm_windows_x64_jit(SpasmInstructions* instructions, SpasmByteCode* bytecode, SpasmData* data)
{
    (void)data;

    for(size_t i = 0; i < vector_size(&instructions->instructions); i++)
    {
        SpasmInstruction* instr = *(SpasmInstruction**)vector_at(&instructions->instructions, i);

        if(!spasm_x86_64_encode_instruction(instr, bytecode))
        {
            return false;
        }
    }

    return true;
}

#endif /* defined(SPASM_ENABLE_X86_64) */
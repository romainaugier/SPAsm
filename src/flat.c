/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/flat.h"
#include "spasm/error.h"

#if defined(SPASM_ENABLE_X86_64)
extern bool spasm_x86_64_assemble_flat(SpasmInstructions* instructions,
                                       SpasmData* data,
                                       uint64_t base_address,
                                       SpasmByteCode* image,
                                       SpasmFlatLayout* layout);
#endif /* defined(SPASM_ENABLE_X86_64) */

void spasm_flat_layout_init(SpasmFlatLayout* layout)
{
    vector_init(&layout->instructions, 64, sizeof(SpasmFlatRange));
    vector_init(&layout->definitions, 16, sizeof(SpasmFlatRange));
    layout->code_size = 0;
}

void spasm_flat_layout_release(SpasmFlatLayout* layout)
{
    vector_release(&layout->instructions);
    vector_release(&layout->definitions);
}

bool spasm_assemble_flat(SpasmABI abi,
                         SpasmInstructions* instructions,
                         SpasmData* data,
                         uint64_t base_address,
                         SpasmByteCode* image,
                         SpasmFlatLayout* layout)
{
    switch(abi)
    {
#if defined(SPASM_ENABLE_X86_64)
        case SpasmABI_WindowsX64:
        case SpasmABI_LinuxX64:
        case SpasmABI_MacOSX64:
            return spasm_x86_64_assemble_flat(instructions, data, base_address, image, layout);
#endif /* defined(SPASM_ENABLE_X86_64) */
        default:
            spasm_error("Flat assembly is not supported for abi: %s", spasm_get_abi_as_string(abi));
            return false;
    }
}

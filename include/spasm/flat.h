/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_FLAT)
#define __SPASM_FLAT

#include "spasm/abi.h"
#include "spasm/bytecode.h"
#include "spasm/data.h"
#include "spasm/instruction.h"

#include "libromano/vector.h"

typedef struct
{
    size_t offset;
    size_t size;
} SpasmFlatRange;

/* Where the instructions and the data blocks are in a flat image */
typedef struct
{
    Vector instructions; /* SpasmFlatRange of each instruction, labels have a size of 0 */
    Vector definitions; /* SpasmFlatRange of each data definition (spasm_data_get_definition) */
    size_t code_size;
} SpasmFlatLayout;

SPASM_API void spasm_flat_layout_init(SpasmFlatLayout* layout);

SPASM_API void spasm_flat_layout_release(SpasmFlatLayout* layout);

/*
 * Assembles a flat image: the code, then the rodata, data and bss (zero-filled) blocks, each section
 * aligned on 16 bytes. base_address is the address of the first byte of the image, used by the
 * absolute references to symbols ([label], mov rax, label). Labels and data blocks are resolved,
 * branches to labels use rel8 when the target is close enough. Undefined symbols are errors (a flat
 * image has no relocations). layout can be NULL
 */
SPASM_API bool spasm_assemble_flat(SpasmABI abi,
                                   SpasmInstructions* instructions,
                                   SpasmData* data,
                                   uint64_t base_address,
                                   SpasmByteCode* image,
                                   SpasmFlatLayout* layout);

#endif /* !defined(__SPASM_FLAT) */

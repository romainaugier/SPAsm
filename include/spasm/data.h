/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_DATA)
#define __SPASM_DATA

#include "spasm/common.h"

#include "libromano/hashmap.h"
#include "libromano/vector.h"

typedef enum
{
    SpasmDataType_ROData,
    SpasmDataType_Data,
    SpasmDataType_BSS,
} SpasmDataType;

typedef const char* SpasmDataId;

#define SPASM_INVALID_DATA_ID NULL

typedef enum {
    SpasmReloctype_REL32, /* RIP/PC-relative 32-bit (common for calls/jumps) */
    SpasmReloctype_REL32_1, /* RIP-relative with -1 adjustment */
    SpasmReloctype_REL32_2, /* RIP-relative with -2 adjustment */
    SpasmReloctype_REL32_3, /* RIP-relative with -3 adjustment */
    SpasmReloctype_REL32_4, /* RIP-relative with -4 adjustment */
    SpasmReloctype_ABS64, /* Absolute 64-bit address */
    SpasmReloctype_ABS32, /* Absolute 32-bit address */
    SpasmReloctype_PLT32, /* PLT-relative (Linux function calls) */
} SpasmRelocType;

/*
    rodata: Initialized, read-only data (constants, string literals)
            Placed in read-only memory pages

    data: Initialized, writable global or static variables
          Placed in the binrary file and writable at runtime

    bss: Uninitialized (or zero-initialized) global and static variables
         Does not occupy space in the binary, just a placeholder
         Loader zeroes the memory at runtime

    extern_symbols: external symbols that need to be linked.
                    Those are added during the assembling phase.
                    Stores a vector of size_t bytecode offsets references

    exported_symbols: symbols that are exported by the assembler
                      Stores a bytecode start,
                      and a vector of size_t bytecode offsets references
*/

typedef struct
{
    size_t bytecode_start_offset;
    Vector* bytecode_refs_offset;
} SpasmExportSymbol;

typedef struct
{
    HashMap* rodata;
    HashMap* data;
    HashMap* bss;
    HashMap* extern_symbols;
    HashMap* export_symbols;
} SpasmData;

SPASM_API SpasmData spasm_data_new(void);

SPASM_API void spasm_data_add_bytes(SpasmData* data,
                                    const char* data_name,
                                    uint8_t* bytes,
                                    size_t data_sz,
                                    SpasmDataType type);

SPASM_API uintptr_t spasm_data_get_jit_address(SpasmData* data, SpasmDataId data_name);

SPASM_API void spasm_add_extern_symbol(SpasmData* data,
                                        const char* symbol_name,
                                        size_t bytecode_offset);

SPASM_API void spasm_add_export_symbol(SpasmData* data,
                                       const char* symbol_name,
                                       size_t bytecode_start_offset);

SPASM_API void spasm_add_export_symbol_ref(SpasmData* data,
                                           const char* symbol_name,
                                           size_t bytecode_offset);

SPASM_API void spasm_data_destroy(SpasmData* data);

#endif /* !defined(__SPASM_DATA) */

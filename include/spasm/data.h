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

    export_symbols: symbols that are exported by the assembler
                    Stores a bytecode start,
                    and a vector of size_t bytecode offsets references

    intern_symbols: symbols that are targets of jump, not exported so they are
                    "internal"

    symbols_index: shared by all the tables to assign a unique index for each symbol
*/

typedef struct
{
    size_t offset;
    SpasmRelocType reloc_type;
} SpasmExternSymbolRef;

typedef struct
{
    void* runtime_address; /* For jit-execution */
    Vector* refs;
    uint32_t index;
} SpasmExternSymbol;

typedef struct
{
    size_t offset;
    SpasmRelocType reloc_type;
} SpasmExportSymbolRef;

typedef struct
{
    size_t start_offset;
    Vector* refs;
    uint32_t index;
} SpasmExportSymbol;

typedef struct
{
    size_t offset;  /* offset in the bytecode */
    uint8_t rel_sz; /* size of the relative jump in bytes */
} SpasmInternSymbolRef;

typedef struct
{
    size_t start_offset;
    Vector* refs;
} SpasmInternSymbol;

typedef struct
{
    HashMap* rodata;
    HashMap* data;
    HashMap* bss;
    HashMap* extern_symbols;
    HashMap* export_symbols;
    HashMap* intern_symbols;

    uint32_t symbols_index;
} SpasmData;

/*
 * Returns false on failure (memory allocation from HashMap members)
 */
SPASM_API bool spasm_data_init(SpasmData* data);

SPASM_API void spasm_data_add_bytes(SpasmData* data,
                                    const char* data_name,
                                    uint8_t* bytes,
                                    size_t data_sz,
                                    SpasmDataType type);

SPASM_API uintptr_t spasm_data_get_jit_address(SpasmData* data, SpasmDataId data_name);

/* Extern Symbols */

SPASM_API size_t spasm_data_num_externs(SpasmData* data);

SPASM_API void spasm_data_add_extern_symbol(SpasmData* data,
                                            const char* symbol_name,
                                            uint32_t symbol_name_sz,
                                            size_t bytecode_offset,
                                            SpasmRelocType reloc_type);

typedef struct
{
    const char* name;
    uint32_t name_sz;
    SpasmExternSymbol* symbol;
    HashMapIterator hashmap_it;
} SpasmDataExternSymbolIterator;

SPASM_API void spasm_data_extern_symbol_iterator_init(SpasmDataExternSymbolIterator* it);

SPASM_API bool spasm_data_iterate_extern_symbols(SpasmData* data,
                                                 SpasmDataExternSymbolIterator* it);

SPASM_API size_t spasm_data_extern_num_relocations(SpasmData* data);

/* Export Symbols */

SPASM_API size_t spasm_data_num_exports(SpasmData* data);

SPASM_API void spasm_data_add_export_symbol(SpasmData* data,
                                            const char* symbol_name,
                                            uint32_t symbol_name_sz,
                                            size_t bytecode_start_offset);

SPASM_API void spasm_data_add_export_symbol_ref(SpasmData* data,
                                                const char* symbol_name,
                                                uint32_t symbol_name_sz,
                                                size_t bytecode_offset,
                                                SpasmRelocType reloc_type);

typedef struct
{
    const char* name;
    uint32_t name_sz;
    SpasmExportSymbol* symbol;
    HashMapIterator hashmap_it;
} SpasmDataExportSymbolIterator;

SPASM_API void spasm_data_export_symbol_iterator_init(SpasmDataExportSymbolIterator* it);

SPASM_API bool spasm_data_iterate_export_symbols(SpasmData* data,
                                                 SpasmDataExportSymbolIterator* it);

/* Intern Symbols */

SPASM_API size_t spasm_data_num_interns(SpasmData* data);

SPASM_API void spasm_data_add_intern_symbol(SpasmData* data,
                                            const char* symbol_name,
                                            uint32_t symbol_name_sz,
                                            size_t bytecode_start_offset);

SPASM_API void spasm_data_add_intern_symbol_ref(SpasmData* data,
                                                const char* symbol_name,
                                                uint32_t symbol_name_sz,
                                                size_t bytecode_offset,
                                                uint8_t rel_sz);

typedef struct
{
    const char* name;
    uint32_t name_sz;
    SpasmInternSymbol* symbol;
    HashMapIterator hashmap_it;
} SpasmDataInternSymbolIterator;

SPASM_API void spasm_data_intern_symbol_iterator_init(SpasmDataInternSymbolIterator* it);

SPASM_API bool spasm_data_iterate_intern_symbols(SpasmData* data,
                                                 SpasmDataInternSymbolIterator* it);

/* Destructor */

SPASM_API void spasm_data_release(SpasmData* data);

#endif /* !defined(__SPASM_DATA) */

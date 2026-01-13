/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/data.h"

#include "libromano/hashmap.h"
#include "libromano/vector.h"
#include "spasm/error.h"

#include <stdint.h>
#include <string.h>

SpasmData spasm_data_new(void)
{
    SpasmData data;
    data.rodata = hashmap_new(16);
    data.data = hashmap_new(16);
    data.bss = hashmap_new(16);
    data.extern_symbols = hashmap_new(16);
    data.export_symbols = hashmap_new(16);

    return data;
}

void spasm_data_add_bytes(SpasmData* data,
                          const char* data_name,
                          uint8_t* bytes,
                          size_t data_sz,
                          SpasmDataType type)
{
    uint32_t data_name_sz = (uint32_t)strlen(data_name);

    switch(type)
    {
        case SpasmDataType_Data:
            hashmap_insert(data->data, data_name, data_name_sz, (void*)bytes, (uint32_t)data_sz);
            break;
        case SpasmDataType_ROData:
            hashmap_insert(data->rodata, data_name, data_name_sz, (void*)bytes, (uint32_t)data_sz);
            break;
        default:
            break;
    }
}

uintptr_t spasm_data_get_jit_address(SpasmData* data, SpasmDataId data_name)
{
    uint32_t data_name_sz = (uint32_t)strlen(data_name);

    /* TODO: do it for ROData too */
    void* value = hashmap_get(data->data, data_name, data_name_sz, NULL);

    return (uintptr_t)value;
}

void spasm_add_extern_symbol(SpasmData* data,
                             const char* symbol_name,
                             size_t bytecode_offset)
{
    SPASM_ASSERT(data != NULL, "data is NULL");

    size_t symbol_name_sz = strlen(symbol_name);

    void* value = hashmap_get(data->extern_symbols,
                              (const void*)symbol_name,
                              (const uint32_t)symbol_name_sz,
                              NULL);

    if(value == NULL)
    {
        Vector* v = vector_new(8, sizeof(size_t));
        vector_push_back(v, &bytecode_offset);

        hashmap_insert(data->extern_symbols,
                       (const void*)symbol_name,
                       (const uint32_t)symbol_name_sz,
                       &v,
                       sizeof(Vector*));
    }
    else
    {
        vector_push_back((Vector*)value, &bytecode_offset);
    }
}

void spasm_add_export_symbol(SpasmData* data,
                             const char* symbol_name,
                             size_t bytecode_start_offset)
{
    SPASM_ASSERT(data != NULL, "data is NULL");

    size_t symbol_name_sz = strlen(symbol_name);

    void* value = hashmap_get(data->export_symbols,
                              (const void*)symbol_name,
                              (const uint32_t)symbol_name_sz,
                              NULL);

    if(value == NULL)
    {
        SpasmExportSymbol sym;
        sym.bytecode_start_offset = bytecode_start_offset;
        sym.bytecode_refs_offset = vector_new(8, sizeof(size_t));

        hashmap_insert(data->extern_symbols,
                       (const void*)symbol_name,
                       (const uint32_t)symbol_name_sz,
                        &sym,
                        sizeof(SpasmExportSymbol));
    }
    else
    {
        spasm_error("Symbol %s is already added in export symbols table");
    }
}

void spasm_add_export_symbol_ref(SpasmData* data,
                                 const char* symbol_name,
                                 size_t bytecode_offset)
{
    SPASM_ASSERT(data != NULL, "data is NULL");

    size_t symbol_name_sz = strlen(symbol_name);

    void* value = hashmap_get(data->export_symbols,
                              (const void*)symbol_name,
                              (const uint32_t)symbol_name_sz,
                              NULL);

    if(value == NULL)
    {
        spasm_error("Symbol %s is not present in export symbols table");
    }
    else
    {
        SpasmExportSymbol* sym = (SpasmExportSymbol*)value;
        vector_push_back(sym->bytecode_refs_offset, &bytecode_offset);
    }
}

void spasm_data_destroy(SpasmData* data)
{
    hashmap_free(data->rodata);
    hashmap_free(data->data);
    hashmap_free(data->bss);

    HashMapIterator it = 0;
    void* key;
    Vector* value;

    while(hashmap_iterate(data->extern_symbols, &it, NULL, NULL, (void**)value, NULL))
        vector_free(value);

    it = 0;

    while(hashmap_iterate(data->export_symbols, &it, NULL, NULL, (void**)value, NULL))
        vector_free(value);
}

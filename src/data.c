/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/data.h"

#include "libromano/hashmap.h"
#include "libromano/vector.h"
#include "spasm/error.h"

#include <stdint.h>
#include <string.h>

bool spasm_data_init(SpasmData* data)
{
    data->rodata = hashmap_new(16);

    if(data->rodata == NULL)
        return false;

    data->data = hashmap_new(16);

    if(data->data == NULL)
        return false;

    data->bss = hashmap_new(16);

    if(data->bss == NULL)
        return false;

    data->extern_symbols = hashmap_new(16);

    if(data->extern_symbols == NULL)
        return false;

    data->export_symbols = hashmap_new(16);

    if(data->export_symbols == NULL)
        return false;

    data->symbols_index = 0;

    return true;
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

size_t spasm_data_num_externs(SpasmData* data)
{
    return (size_t)hashmap_size(data->extern_symbols);
}

void spasm_data_add_extern_symbol(SpasmData* data,
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
        SpasmExternSymbol sym;
        sym.refs_offset = vector_new(8, sizeof(size_t));
        sym.index = data->symbols_index++;
        vector_push_back(sym.refs_offset, &bytecode_offset);

        hashmap_insert(data->extern_symbols,
                       (const void*)symbol_name,
                       (const uint32_t)symbol_name_sz,
                       &sym,
                       sizeof(Vector*));
    }
    else
    {
        vector_push_back((Vector*)value, &bytecode_offset);
    }
}

void spasm_data_extern_symbol_iterator_init(SpasmDataExternSymbolIterator* it)
{
    it->name = NULL;
    it->symbol = NULL;
    it->hashmap_it = 0;
}

bool spasm_data_iterate_extern_symbols(SpasmData* data,
                                       SpasmDataExternSymbolIterator* it)
{
    return hashmap_iterate(data->extern_symbols,
                           &it->hashmap_it,
                           (void**)&it->name,
                           &it->name_sz,
                           (void**)&it->symbol,
                           NULL);
}

size_t spasm_data_extern_num_relocations(SpasmData* data)
{
    size_t num = 0;

    SpasmDataExternSymbolIterator it;
    spasm_data_extern_symbol_iterator_init(&it);

    while(spasm_data_iterate_extern_symbols(data, &it))
        num += (size_t)vector_size(it.symbol->refs_offset);

    return num;
}

size_t spasm_data_num_exports(SpasmData* data)
{
    return (size_t)hashmap_size(data->export_symbols);
}

void spasm_data_export_symbol_iterator_init(SpasmDataExportSymbolIterator* it)
{
    it->name = NULL;
    it->symbol = NULL;
    it->hashmap_it = 0;
}

bool spasm_data_iterate_export_symbols(SpasmData* data,
                                       SpasmDataExportSymbolIterator* it)
{
    return hashmap_iterate(data->export_symbols,
                           &it->hashmap_it,
                           (void**)&it->name,
                           &it->name_sz,
                           (void**)&it->symbol,
                           NULL);
}

void spasm_data_add_export_symbol(SpasmData* data,
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
        sym.start_offset = bytecode_start_offset;
        sym.refs_offset = vector_new(8, sizeof(size_t));
        sym.index = data->symbols_index++;

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

void spasm_data_add_export_symbol_ref(SpasmData* data,
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
        vector_push_back(sym->refs_offset, &bytecode_offset);
    }
}

void spasm_data_release(SpasmData* data)
{
    hashmap_free(data->rodata);
    hashmap_free(data->data);
    hashmap_free(data->bss);

    HashMapIterator it = 0;
    Vector* value = NULL;

}

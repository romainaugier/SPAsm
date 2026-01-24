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

    data->intern_symbols = hashmap_new(16);

    if(data->intern_symbols == NULL)
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

/* Extern Symbols */

size_t spasm_data_num_externs(SpasmData* data)
{
    return (size_t)hashmap_size(data->extern_symbols);
}

void spasm_data_add_extern_symbol(SpasmData* data,
                                  const char* symbol_name,
                                  uint32_t symbol_name_sz,
                                  size_t bytecode_offset,
                                  SpasmRelocType reloc_type)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->extern_symbols != NULL, "data->extern_symbols is NULL");

    if(symbol_name_sz == 0)
        symbol_name_sz = (uint32_t)strlen(symbol_name);

    SpasmExternSymbol* sym = hashmap_get(data->extern_symbols,
                                         (const void*)symbol_name,
                                         (const uint32_t)symbol_name_sz,
                                         NULL);

    if(sym == NULL)
    {
        SpasmExternSymbol new_sym;
        new_sym.runtime_address = NULL;
        new_sym.refs = vector_new(8, sizeof(SpasmExternSymbolRef));
        new_sym.index = data->symbols_index++;

        SpasmExternSymbolRef ref;
        ref.offset = bytecode_offset;
        ref.reloc_type = reloc_type;

        vector_push_back(new_sym.refs, &ref);

        hashmap_insert(data->extern_symbols,
                       (const void*)symbol_name,
                       (const uint32_t)symbol_name_sz,
                       &new_sym,
                       sizeof(SpasmExternSymbol));
    }
    else
    {
        SPASM_ASSERT(sym->refs != NULL, "sym->refs is NULL");

        SpasmExternSymbolRef ref;
        ref.offset = bytecode_offset;
        ref.reloc_type = reloc_type;

        vector_push_back(sym->refs, &ref);
    }
}

void spasm_data_extern_symbol_iterator_init(SpasmDataExternSymbolIterator* it)
{
    SPASM_ASSERT(it != NULL, "it is NULL");

    it->name = NULL;
    it->symbol = NULL;
    it->hashmap_it = 0;
}

bool spasm_data_iterate_extern_symbols(SpasmData* data,
                                       SpasmDataExternSymbolIterator* it)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->extern_symbols != NULL, "data->extern_symbols is NULL");

    return hashmap_iterate(data->extern_symbols,
                           &it->hashmap_it,
                           (void**)&it->name,
                           &it->name_sz,
                           (void**)&it->symbol,
                           NULL);
}

size_t spasm_data_extern_num_relocations(SpasmData* data)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->extern_symbols != NULL, "data->extern_symbols is NULL");

    size_t num = 0;

    SpasmDataExternSymbolIterator it;
    spasm_data_extern_symbol_iterator_init(&it);

    while(spasm_data_iterate_extern_symbols(data, &it))
        num += (size_t)vector_size(it.symbol->refs);

    return num;
}

/* Export Symbols */

size_t spasm_data_num_exports(SpasmData* data)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->export_symbols != NULL, "data->export_symbols is NULL");

    return (size_t)hashmap_size(data->export_symbols);
}

void spasm_data_export_symbol_iterator_init(SpasmDataExportSymbolIterator* it)
{
    SPASM_ASSERT(it != NULL, "it is NULL");

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
                                  uint32_t symbol_name_sz,
                                  size_t bytecode_start_offset)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->export_symbols != NULL, "data->export_symbols != NULL");

    if(symbol_name_sz == 0)
        symbol_name_sz = (uint32_t)strlen(symbol_name);

    SpasmExportSymbol* sym = hashmap_get(data->export_symbols,
                                         (const void*)symbol_name,
                                         (const uint32_t)symbol_name_sz,
                                         NULL);

    if(sym == NULL)
    {
        SpasmExportSymbol new_sym;
        new_sym.start_offset = bytecode_start_offset;
        new_sym.refs = vector_new(8, sizeof(SpasmExportSymbolRef));
        new_sym.index = data->symbols_index++;

        hashmap_insert(data->export_symbols,
                       (const void*)symbol_name,
                       (const uint32_t)symbol_name_sz,
                        &new_sym,
                        sizeof(SpasmExportSymbol));
    }
    else
    {
        spasm_error("Symbol \"%s\" is already added in export symbols table");
    }
}

void spasm_data_add_export_symbol_ref(SpasmData* data,
                                      const char* symbol_name,
                                      uint32_t symbol_name_sz,
                                      size_t bytecode_offset,
                                      SpasmRelocType reloc_type)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->export_symbols != NULL, "data->export_symbols is NULL");

    if(symbol_name_sz == 0)
        symbol_name_sz = (uint32_t)strlen(symbol_name);

    SpasmExportSymbol* sym = hashmap_get(data->export_symbols,
                                         (const void*)symbol_name,
                                         (const uint32_t)symbol_name_sz,
                                         NULL);

    if(sym == NULL)
    {
        spasm_error("Symbol \"%s\" is not present in export symbols table");
    }
    else
    {
        SPASM_ASSERT(sym->refs != NULL, "sym->refs is NULL");

        SpasmExportSymbolRef ref;
        ref.offset = bytecode_offset;
        ref.reloc_type = reloc_type;

        vector_push_back(sym->refs, &ref);
    }
}

/* Intern Symbols */

size_t spasm_data_num_interns(SpasmData* data)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->intern_symbols != NULL, "data->intern_symbols is NULL");

    return hashmap_size(data->intern_symbols);
}

void spasm_data_add_intern_symbol(SpasmData* data,
                                  const char* symbol_name,
                                  uint32_t symbol_name_sz,
                                  size_t bytecode_start_offset)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->intern_symbols != NULL, "data->intern_symbols is NULL");

    if(symbol_name_sz == 0)
        symbol_name_sz = (uint32_t)strlen(symbol_name);

    void* exists = hashmap_get(data->intern_symbols,
                               (const void*)symbol_name,
                               symbol_name_sz,
                               NULL);

    if(exists != NULL)
        return;

    SpasmInternSymbol sym;
    sym.start_offset = bytecode_start_offset;
    sym.refs = vector_new(8, sizeof(SpasmInternSymbolRef));

    hashmap_insert(data->intern_symbols,
                   (const void*)symbol_name,
                   symbol_name_sz,
                   (void*)&sym,
                   (uint32_t)sizeof(SpasmInternSymbol));
}

void spasm_data_add_intern_symbol_ref(SpasmData* data,
                                      const char* symbol_name,
                                      uint32_t symbol_name_sz,
                                      size_t bytecode_offset,
                                      uint8_t rel_sz)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(data->intern_symbols != NULL, "data->intern_symbols is NULL");

    if(symbol_name_sz == 0)
        symbol_name_sz = (uint32_t)strlen(symbol_name);

    SpasmInternSymbol* sym = (SpasmInternSymbol*)hashmap_get(data->intern_symbols,
                                                             (const void*)symbol_name,
                                                             symbol_name_sz,
                                                             NULL);

    if(sym == NULL)
    {
        spasm_error("Cannot add reference to intern symbol. Cannot find symbol: \"%s\"",
                    symbol_name);
        return;
    }

    SPASM_ASSERT(sym->refs != NULL, "sym->refs is NULL");

    SpasmInternSymbolRef ref;
    ref.offset = bytecode_offset;
    ref.rel_sz = rel_sz;

    vector_push_back(sym->refs, &ref);
}

void spasm_data_intern_symbol_iterator_init(SpasmDataInternSymbolIterator* it)
{
    it->symbol = NULL;
    it->hashmap_it = 0;
    it->name = NULL;
    it->name_sz = 0;
}

bool spasm_data_iterate_intern_symbols(SpasmData* data,
                                       SpasmDataInternSymbolIterator* it)
{
    SPASM_ASSERT(data != NULL, "data is NULL");
    SPASM_ASSERT(it != NULL, "it is NULL");

    SPASM_ASSERT(data->intern_symbols != NULL, "data->intern_symbols is NULL");

    return hashmap_iterate(data->intern_symbols,
                           &it->hashmap_it,
                           (void**)&it->name,
                           &it->name_sz,
                           (void**)&it->symbol, NULL);
}

/* Destructor */

void spasm_data_release(SpasmData* data)
{
    SPASM_ASSERT(data != NULL, "data is NULL");

    hashmap_free(data->rodata);
    hashmap_free(data->data);
    hashmap_free(data->bss);

    SpasmDataExternSymbolIterator extern_it;
    spasm_data_extern_symbol_iterator_init(&extern_it);

    while(spasm_data_iterate_extern_symbols(data, &extern_it))
    {
        vector_free(extern_it.symbol->refs);
    }

    hashmap_free(data->extern_symbols);

    SpasmDataExportSymbolIterator export_it;
    spasm_data_export_symbol_iterator_init(&export_it);

    while(spasm_data_iterate_export_symbols(data, &export_it))
    {
        vector_free(export_it.symbol->refs);
    }

    hashmap_free(data->export_symbols);

    SpasmDataInternSymbolIterator intern_it;
    spasm_data_intern_symbol_iterator_init(&intern_it);

    while(spasm_data_iterate_intern_symbols(data, &intern_it))
        vector_free(intern_it.symbol->refs);

    hashmap_free(data->intern_symbols);
}

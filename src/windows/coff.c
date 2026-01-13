/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

/*
 * See: https://gist.github.com/RealNeGate/428a274496ce9852e06f9db1852b6cc2
 */

#include "spasm/windows/coff.h"
#include "spasm/error.h"

#include <string.h>

SpasmCoffRelocationType spasm_reloc_to_coff_reloc(SpasmRelocType type,
                                                  SpasmCoffMachineType machine)
{
    if(machine == SpasmCoffMachineType_AMD64)
    {
        switch(type)
        {
            case SpasmReloctype_REL32:
                return SpasmCoffRelocationType_AMD64_REL32;
            case SpasmReloctype_REL32_1:
                return SpasmCoffRelocationType_AMD64_REL32_1;
            case SpasmReloctype_REL32_2:
                return SpasmCoffRelocationType_AMD64_REL32_2;
            case SpasmReloctype_REL32_3:
                return SpasmCoffRelocationType_AMD64_REL32_3;
            case SpasmReloctype_REL32_4:
                return SpasmCoffRelocationType_AMD64_REL32_4;
            case SpasmReloctype_ABS64:
                return SpasmCoffRelocationType_AMD64_ADDR64;
            case SpasmReloctype_ABS32:
                return SpasmCoffRelocationType_AMD64_ADDR32;
            default:
                return SpasmCoffRelocationType_AMD64_REL32;
        }
    }
    else
    {
        switch(type)
        {
            case SpasmReloctype_ABS32:
                return SpasmCoffRelocationType_I386_DIR32;
            default:
                return SpasmCoffRelocationType_I386_REL32;
        }
    }
}

uint8_t* spasm_generate_coff(SpasmByteCode* bytecode,
                             SpasmData* data,
                             SpasmCoffMachineType machine,
                             size_t* out_size)
{
    size_t code_size;
    SpasmByte* code = spasm_bytecode_get(bytecode, &code_size);

    if(code == NULL)
    {
        spasm_error("Error during COFF output: invalid bytecode");
        return NULL;
    }

    size_t num_exports = hashmap_size(data->export_symbols);
    size_t num_refs = hashmap_size(data->extern_symbols);
    size_t num_symbols = 1 + num_refs + num_exports;

    size_t string_table_size = 4;

    for(size_t i = 0; i < vector_size(&data->refs); i++)
    {
        SpasmExternalReference* ref = (SpasmExternalReference*)vector_at(&symtable->refs, i);
        size_t name_sz = strlen(ref->name);

        if(name_sz >= 8)
        {
            string_table_size += name_sz + 1;
        }
    }

    for(size_t i = 0; i < vector_size(&data->exports); i++)
    {
        SpasmExportedSymbol* sym = (SpasmExportedSymbol*)vector_at(&symtable->refs, i);
        size_t name_sz = strlen(sym->name);

        if(name_sz >= 8)
        {
            string_table_size += name_sz + 1;
        }
    }

    size_t header_offset = 0;
    size_t section_header_offset = sizeof(SpasmCoffHeader);
    size_t code_offset = section_header_offset + sizeof(SpasmCoffSectionHeader);
    size_t reloc_offset = code_offset + code_size;
    size_t symbol_offset = reloc_offset + (num_refs * sizeof(SpasmCoffRelocation));
    size_t string_offset = symbol_offset + (num_symbols * sizeof(SpasmCoffSymbol));
    size_t total_size = string_offset + string_table_size;

    uint8_t* output = calloc(1, total_size);

    if(!output)
    {
        spasm_error("Error during COFF output: failed to allocate output buffer");
        return NULL;
    }

    SpasmCoffHeader* header = (SpasmCoffHeader*)(output + header_offset);
    header->machine = machine;
    header->number_of_sections = 1;
    header->time_date_stamp = 0;
    header->pointer_to_symbol_table = (uint32_t)symbol_offset;
    header->number_of_symbols = (uint32_t)num_symbols;
    header->size_of_optional_header = 0;
    header->characteristics = 0;

    SpasmCoffSectionHeader* section = (SpasmCoffSectionHeader*)(output + section_header_offset);
    memcpy(section->name, ".text\0\0\0", 8);
    section->virtual_size = 0;
    section->virtual_address = 0;
    section->size_of_raw_data = (uint32_t)code_size;
    section->pointer_to_raw_data = (uint32_t)code_offset;
    section->pointer_to_relocations = num_refs ? (uint32_t)reloc_offset : 0;
    section->pointer_to_line_numbers = 0;
    section->number_of_relocations = (uint16_t)num_refs;
    section->number_of_line_numbers = 0;
    section->characteristics = SpasmCoffSectionHeaderFlag_CNT_CODE |
                               SpasmCoffSectionHeaderFlag_MEM_EXECUTE |
                               SpasmCoffSectionHeaderFlag_MEM_READ |
                               SpasmCoffSectionHeaderFlag_ALIGN_16BYTES;

    memcpy(output + code_offset, code, code_size);

    SpasmCoffRelocation* relocs = (SpasmCoffRelocation*)(output + reloc_offset);
    for(size_t i = 0; i < num_refs; i++)
    {
        relocs[i].virtual_address = (uint32_t)((SpasmExternalReference*)vector_at(&symtable->refs, i))->offset;
        relocs[i].symbol_table_index = (uint32_t)(1 + num_exports + i);
        relocs[i].type = spasm_reloc_to_coff_reloc(((SpasmExternalReference*)vector_at(&symtable->refs, i))->type, machine);
    }

    SpasmCoffSymbol* syms = (SpasmCoffSymbol*)(output + symbol_offset);
    uint32_t* string_table = (uint32_t*)(output + string_offset);
    *string_table = (uint32_t)string_table_size;
    char* string_data = (char*)(string_table + 1);
    size_t string_pos = 0;

    size_t sym_idx = 0;

    memcpy(syms[sym_idx].short_name, ".text\0\0\0", 8);
    syms[sym_idx].value = 0;
    syms[sym_idx].section_number = 1;
    syms[sym_idx].type = SpasmCoffSymbolType_NULL;
    syms[sym_idx].storage_class = SpasmCoffStorageClass_STATIC;
    syms[sym_idx].number_of_aux_symbols = 0;
    sym_idx++;

    for (size_t i = 0; i < num_exports; i++, sym_idx++)
    {
        SpasmExportedSymbol* sym = (SpasmExportedSymbol*)vector_at(&symtable->exports, i);
        const char* name = sym->name;

        if(strlen(name) < 8)
        {
            memset(syms[sym_idx].name.short_name, 0, 8);
            strncpy(syms[sym_idx].name.short_name, name, 8);
        }
        else
        {
            syms[sym_idx].value = 0;
        }

        syms[sym_idx].section_number = 0;
        syms[sym_idx].type = SpasmCoffSymbolType_NULL;
        syms[sym_idx].storage_class = SpasmCoffStorageClass_EXTERNAL;
        syms[sym_idx].number_of_aux_symbols = 0;
    }

    *out_size = total_size;

    return output;
}

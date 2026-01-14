/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

/*
 * See: https://gist.github.com/RealNeGate/428a274496ce9852e06f9db1852b6cc2
 */

#include "spasm/windows/coff.h"
#include "spasm/error.h"

#include <string.h>

SpasmCoffMachineType spasm_abi_to_coff_machine_type(SpasmABI abi)
{
    switch(abi)
    {
        case SpasmABI_WindowsX64:
        case SpasmABI_LinuxX64:
        case SpasmABI_MacOSX64:
            return SpasmCoffMachineType_AMD64;
        default:
            return SpasmCoffMachineType_UNKNOWN;
    }
}

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

void spasm_write_coff_text_section(uint8_t* output,
                                   SpasmByte* code,
                                   uint32_t code_size,
                                   uint32_t code_offset,
                                   uint16_t num_relocs,
                                   uint32_t reloc_offset,
                                   int16_t section_number,
                                   uint32_t* global_symbol_index,
                                   size_t section_headers_offset,
                                   size_t symbols_offset)
{
    SpasmCoffSectionHeader* section = (SpasmCoffSectionHeader*)(output + section_headers_offset);
    memcpy(section->name, ".text\0\0\0", 8);
    section->virtual_size = 0;
    section->virtual_address = 0;
    section->size_of_raw_data = (uint32_t)code_size;
    section->pointer_to_raw_data = (uint32_t)code_offset;
    section->pointer_to_relocations = num_relocs ? (uint32_t)reloc_offset : 0;
    section->pointer_to_line_numbers = 0;
    section->number_of_relocations = (uint16_t)num_relocs;
    section->number_of_line_numbers = 0;
    section->characteristics = SpasmCoffSectionHeaderFlag_CNT_CODE |
                               SpasmCoffSectionHeaderFlag_MEM_EXECUTE |
                               SpasmCoffSectionHeaderFlag_MEM_READ |
                               SpasmCoffSectionHeaderFlag_ALIGN_16BYTES;

    memcpy(output + code_offset, code, code_size);

    SpasmCoffSymbol* syms = (SpasmCoffSymbol*)(output + symbols_offset);

    memcpy(syms[*global_symbol_index].short_name, ".text\0\0\0", 8);
    syms[*global_symbol_index].value = 0;
    syms[*global_symbol_index].section_number = section_number;
    syms[*global_symbol_index].type = SpasmCoffSymbolType_NULL;
    syms[*global_symbol_index].storage_class = SpasmCoffStorageClass_STATIC;
    syms[*global_symbol_index].number_of_aux_symbols = 1;

    (*global_symbol_index)++;

    /* Auxiliary symbol */
    memset(&syms[*global_symbol_index], 0, sizeof(SpasmCoffSymbol));
    syms[*global_symbol_index].value = code_size;

    (*global_symbol_index)++;
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

    size_t num_sections = 1;
    uint32_t global_symbol_index = 0;

    size_t num_externs = spasm_data_num_externs(data);
    size_t num_exports = spasm_data_num_exports(data);

    /* Each section has a symbol and an auxiliary symbol */
    size_t num_symbols = num_externs + num_exports + (num_sections * 2);
    size_t num_relocs = 0;

    size_t string_table_size = 4;

    SpasmDataExternSymbolIterator extern_it;
    spasm_data_extern_symbol_iterator_init(&extern_it);

    while(spasm_data_iterate_extern_symbols(data, &extern_it))
    {
        string_table_size += extern_it.name_sz >= 8 ? (size_t)extern_it.name_sz + 1 : 0;
        num_relocs += vector_size(extern_it.symbol->refs_offset);
    }

    SpasmDataExportSymbolIterator export_it;
    spasm_data_export_symbol_iterator_init(&export_it);

    while(spasm_data_iterate_export_symbols(data, &export_it))
    {
        string_table_size += export_it.name_sz >= 8 ? (size_t)export_it.name_sz  + 1: 0;
        num_relocs += vector_size(export_it.symbol->refs_offset);
    }

    size_t header_offset = 0;
    size_t section_headers_offset = sizeof(SpasmCoffHeader);
    size_t code_offset = section_headers_offset +
                         (num_sections * sizeof(SpasmCoffSectionHeader));
    size_t reloc_offset = code_offset + code_size;
    size_t symbols_offset = reloc_offset +
                           (num_relocs * sizeof(SpasmCoffRelocation));
    size_t string_offset = symbols_offset +
                           (num_symbols * sizeof(SpasmCoffSymbol));
    size_t total_size = string_offset + string_table_size;

    uint8_t* output = calloc(1, total_size);

    if(!output)
    {
        spasm_error("Error during COFF output: failed to allocate output buffer");
        return NULL;
    }

    SpasmCoffHeader* header = (SpasmCoffHeader*)(output + header_offset);
    header->machine = machine;
    header->number_of_sections = num_sections;
    header->time_date_stamp = 0;
    header->pointer_to_symbol_table = (uint32_t)symbols_offset;
    header->number_of_symbols = (uint32_t)num_symbols;
    header->size_of_optional_header = 0;
    header->characteristics = 0;

    int16_t text_section_number = 1;

    spasm_write_coff_text_section(output,
                                  code,
                                  code_size,
                                  code_offset,
                                  (uint16_t)num_relocs,
                                  (uint32_t)reloc_offset,
                                  text_section_number,
                                  &global_symbol_index,
                                  section_headers_offset,
                                  symbols_offset);

    SpasmCoffRelocation* relocs = (SpasmCoffRelocation*)(output + reloc_offset);

    size_t reloc_idx = 0;

    SpasmCoffSymbol* symbols = (SpasmCoffSymbol*)(output + symbols_offset);
    uint32_t* string_table = (uint32_t*)(output + string_offset);
    *string_table = (uint32_t)string_table_size;
    char* string_data = (char*)(string_table + 1);

    /* Write all exported (defined) symbols */

    spasm_data_export_symbol_iterator_init(&export_it);

    while(spasm_data_iterate_export_symbols(data, &export_it))
    {
        uint32_t symbol_index = global_symbol_index + export_it.symbol->index;

        for(size_t i = 0; i < vector_size(export_it.symbol->refs_offset); i++)
        {
            relocs[reloc_idx].virtual_address = *((uint32_t*)vector_at(export_it.symbol->refs_offset, i));
            relocs[reloc_idx].symbol_table_index = symbol_index;
            /*
                * TODO: Change this and add the relocation type in the assembler
                * Store the type along with the offset as a pair/small struct
                */
            relocs[reloc_idx].type = SpasmCoffRelocationType_AMD64_REL32;
            reloc_idx++;
        }

        if(export_it.name_sz < 8)
        {
            memset(symbols[symbol_index].short_name, 0, 8 * sizeof(char));
            memcpy(symbols[symbol_index].short_name,
                    export_it.name,
                    export_it.name_sz * sizeof(char));
        }
        else
        {
            memcpy(string_data,
                    export_it.name,
                    export_it.name_sz * sizeof(char));

            symbols[symbol_index].long_name[0] = 0;
            symbols[symbol_index].long_name[1] = (uint32_t)((uint8_t*)string_data -
                                                            (uint8_t*)string_table);

            string_data += (size_t)extern_it.name_sz + 1;
        }

        symbols[symbol_index].value = (uint32_t)export_it.symbol->start_offset;
        symbols[symbol_index].section_number = text_section_number;
        symbols[symbol_index].type = SpasmCoffSymbolType_NULL;
        symbols[symbol_index].storage_class = SpasmCoffStorageClass_EXTERNAL;
        symbols[symbol_index].number_of_aux_symbols = 0;
    }

    /* Write all external (undefined) symbols */

    spasm_data_extern_symbol_iterator_init(&extern_it);

    while(spasm_data_iterate_extern_symbols(data, &extern_it))
    {
        uint32_t symbol_index = global_symbol_index + extern_it.symbol->index;

        for(size_t i = 0; i < vector_size(extern_it.symbol->refs_offset); i++)
        {
            relocs[reloc_idx].virtual_address = *((uint32_t*)vector_at(extern_it.symbol->refs_offset, i));
            relocs[reloc_idx].symbol_table_index = symbol_index;
            /*
             * TODO: Change this and add the relocation type in the assembler
             * Store the type along with the offset as a pair/small struct
             */
            relocs[reloc_idx].type = SpasmCoffRelocationType_AMD64_REL32;
            reloc_idx++;
        }

        if(extern_it.name_sz < 8)
        {
            memset(symbols[symbol_index].short_name, 0, 8 * sizeof(char));
            memcpy(symbols[symbol_index].short_name,
                    extern_it.name,
                    extern_it.name_sz * sizeof(char));
        }
        else
        {
            memcpy(string_data,
                   extern_it.name,
                   extern_it.name_sz * sizeof(char));

            symbols[symbol_index].long_name[0] = 0;
            symbols[symbol_index].long_name[1] = (uint32_t)((uint8_t*)string_data -
                                                            (uint8_t*)string_table);

            string_data += (size_t)extern_it.name_sz + 1;
        }

        symbols[symbol_index].value = 0;
        symbols[symbol_index].section_number = 0;
        symbols[symbol_index].type = SpasmCoffSymbolType_NULL;
        symbols[symbol_index].storage_class = SpasmCoffStorageClass_EXTERNAL;
        symbols[symbol_index].number_of_aux_symbols = 0;
    }

    *out_size = total_size;

    return output;
}

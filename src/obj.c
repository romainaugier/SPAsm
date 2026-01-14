/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/obj.h"
#include "spasm/error.h"
#include "spasm/windows/coff.h"

SpasmObjType spasm_abi_to_obj_type(SpasmABI abi)
{
    switch(abi)
    {
        case SpasmABI_WindowsX64:
            return SpasmObjType_Coff;
        case SpasmABI_MacOSX64:
            return SpasmObjType_MachO;
        case SpasmABI_LinuxX64:
            return SpasmObjType_Elf;
        default:
            return SpasmObjType_Coff;
    }
}

const char* spasm_obj_file_extension(SpasmObjType type)
{
    switch(type)
    {
        case SpasmObjType_Elf:
        case SpasmObjType_MachO:
            return ".o";
        case SpasmObjType_Coff:
        default:
            return ".obj";
    }
}

bool spasm_obj_write_file(const char* filename,
                          SpasmByteCode* bytecode,
                          SpasmData* data,
                          SpasmABI abi)
{
    SPASM_ASSERT(bytecode != NULL, "bytecode is NULL");
    SPASM_ASSERT(data != NULL, "data is NULL");

    size_t out_sz;
    uint8_t* out_data = NULL;

    switch(spasm_abi_to_obj_type(abi))
    {
        case SpasmObjType_Coff:
        {
            out_data = spasm_generate_coff(bytecode,
                                           data,
                                           spasm_abi_to_coff_machine_type(abi),
                                           &out_sz);
            break;
        }
        default:
        {
            spasm_error("Unsupported ABI: %s", spasm_get_abi_as_string(abi));
            return false;
        }
    }

    if(data == NULL)
        return false;

    FILE* f = fopen(filename, "wb");

    if(f == NULL)
    {
        spasm_error("Cannot open file: %s", filename);
        free(out_data);
        return -1;
    }

    size_t written = fwrite(out_data, 1, out_sz, f);

    if(written != out_sz)
        spasm_error("Cannot write to file: %s", filename);

    fclose(f);
    free(out_data);

    return written == out_sz;
}

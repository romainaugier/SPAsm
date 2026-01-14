/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/obj.h"

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

bool spasm_write_obj_file(const char* filename,
                          SpasmByteCode* bytecode,
                          SpasmData* data,
                          SpasmObjType obj_type)
{
    SPASM_ASSERT(bytecode != NULL, "bytecode is NULL");
    SPASM_ASSERT(data != NULL, "data is NULL");

    SPASM_UNUSED(filename);
    SPASM_UNUSED(obj_type);

    /* TODO */

    return true;
}

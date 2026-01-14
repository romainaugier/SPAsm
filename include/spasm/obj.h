/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_OBJ)
#define __SPASM_OBJ

#include "spasm/bytecode.h"
#include "spasm/data.h"
#include "spasm/abi.h"

typedef enum {
    SpasmObjType_Coff,
    SpasmObjType_Elf,
    SpasmObjType_MachO,
} SpasmObjType;

SPASM_API SpasmObjType spasm_abi_to_obj_type(SpasmABI abi);

SPASM_API bool spasm_obj_write_file(const char* filename,
                                    SpasmByteCode* bytecode,
                                    SpasmData* data,
                                    SpasmABI abi);

#endif /* !defined(__SPASM_OBJ) */

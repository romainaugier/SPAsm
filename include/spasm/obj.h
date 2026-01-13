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

SpasmObjType spasm_abi_to_obj_type(SpasmABI abi);

bool spasm_write_obj_file(const char* filename,
                          SpasmByteCode* bytecode,
                          SpasmData* data,
                          SpasmObjType obj_type);

#endif /* !defined(__SPASM_OBJ) */

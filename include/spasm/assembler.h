/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_ASSEMBLER)
#define __SPASM_ASSEMBLER

#include "spasm/instruction.h"
#include "spasm/bytecode.h"
#include "spasm/abi.h"
#include "spasm/data.h"

typedef bool (*SpasmAssembler)(SpasmInstructions*, SpasmByteCode*, SpasmData*);

/* Returns a function ptr to the assembler function for the given backend */
SPASM_API SpasmAssembler spasm_get_assembler(SpasmABI abi);

typedef bool (*SpasmJitAssembler)(SpasmInstructions*, SpasmByteCode*, SpasmData*);

/* Returns a function ptr to the jit assembler function for the given backend */
SPASM_API SpasmJitAssembler spasm_get_jit_assembler(SpasmABI abi);

#endif /* !defined(__SPASM_ASSEMBLER) */

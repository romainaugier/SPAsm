/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_JIT)
#define __SPASM_JIT

#include "spasm/instruction.h"
#include "spasm/bytecode.h"
#include "spasm/abi.h"
#include "spasm/data.h"

typedef bool (*SpasmJitAssembler)(SpasmInstructions*, SpasmByteCode*, SpasmData*);

/* Returns a function ptr to the assembler function for the given backend */
SPASM_API SpasmJitAssembler spasm_get_jit_assembler(SpasmABI abi);

#endif /* !defined(__SPASM_JIT) */
/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/common.h"
#include "spasm/instruction.h"

#if defined(SPASM_ENABLE_AARCH64)

/* Debug funcs */

const char* spasm_get_aarch64_register_as_string(SpasmRegister reg)
{
    SPASM_ASSERT(reg >= SpasmRegister_aarch64_NONE && reg < SpasmRegister_aarch64_COUNT,
                 "reg is not an aarch64 register");

    switch(reg)
    {
        case SpasmRegister_aarch64_NONE: return "none";
        case SpasmRegister_aarch64_X0: return "x0";
        case SpasmRegister_aarch64_X1: return "x1";
        case SpasmRegister_aarch64_X2: return "x2";
        case SpasmRegister_aarch64_X3: return "x3";
        case SpasmRegister_aarch64_X4: return "x4";
        case SpasmRegister_aarch64_X5: return "x5";
        case SpasmRegister_aarch64_X6: return "x6";
        case SpasmRegister_aarch64_X7: return "x7";
        case SpasmRegister_aarch64_X8: return "x8";
        case SpasmRegister_aarch64_X9: return "x9";
        case SpasmRegister_aarch64_X10: return "x10";
        case SpasmRegister_aarch64_X11: return "x11";
        case SpasmRegister_aarch64_X12: return "x12";
        case SpasmRegister_aarch64_X13: return "x13";
        case SpasmRegister_aarch64_X14: return "x14";
        case SpasmRegister_aarch64_X15: return "x15";
        case SpasmRegister_aarch64_X16: return "x16";
        case SpasmRegister_aarch64_X17: return "x17";
        case SpasmRegister_aarch64_X18: return "x18";
        case SpasmRegister_aarch64_X19: return "x19";
        case SpasmRegister_aarch64_X20: return "x20";
        case SpasmRegister_aarch64_X21: return "x21";
        case SpasmRegister_aarch64_X22: return "x22";
        case SpasmRegister_aarch64_X23: return "x23";
        case SpasmRegister_aarch64_X24: return "x24";
        case SpasmRegister_aarch64_X25: return "x25";
        case SpasmRegister_aarch64_X26: return "x26";
        case SpasmRegister_aarch64_X27: return "x27";
        case SpasmRegister_aarch64_X28: return "x28";
        case SpasmRegister_aarch64_X29: return "x29";
        case SpasmRegister_aarch64_X30: return "x30";
        case SpasmRegister_aarch64_SP: return "sp";
        case SpasmRegister_aarch64_W0: return "w0";
        case SpasmRegister_aarch64_W1: return "w1";
        case SpasmRegister_aarch64_W2: return "w2";
        case SpasmRegister_aarch64_W3: return "w3";
        case SpasmRegister_aarch64_W4: return "w4";
        case SpasmRegister_aarch64_W5: return "w5";
        case SpasmRegister_aarch64_W6: return "w6";
        case SpasmRegister_aarch64_W7: return "w7";
        case SpasmRegister_aarch64_W8: return "w8";
        case SpasmRegister_aarch64_W9: return "w9";
        case SpasmRegister_aarch64_W10: return "w10";
        case SpasmRegister_aarch64_W11: return "w11";
        case SpasmRegister_aarch64_W12: return "w12";
        case SpasmRegister_aarch64_W13: return "w13";
        case SpasmRegister_aarch64_W14: return "w14";
        case SpasmRegister_aarch64_W15: return "w15";
        case SpasmRegister_aarch64_W16: return "w16";
        case SpasmRegister_aarch64_W17: return "w17";
        case SpasmRegister_aarch64_W18: return "w18";
        case SpasmRegister_aarch64_W19: return "w19";
        case SpasmRegister_aarch64_W20: return "w20";
        case SpasmRegister_aarch64_W21: return "w21";
        case SpasmRegister_aarch64_W22: return "w22";
        case SpasmRegister_aarch64_W23: return "w23";
        case SpasmRegister_aarch64_W24: return "w24";
        case SpasmRegister_aarch64_W25: return "w25";
        case SpasmRegister_aarch64_W26: return "w26";
        case SpasmRegister_aarch64_W27: return "w27";
        case SpasmRegister_aarch64_W28: return "w28";
        case SpasmRegister_aarch64_W29: return "w29";
        case SpasmRegister_aarch64_W30: return "w30";
        case SpasmRegister_aarch64_WSP: return "wsp";
        case SpasmRegister_aarch64_V0: return "v0";
        case SpasmRegister_aarch64_V1: return "v1";
        case SpasmRegister_aarch64_V2: return "v2";
        case SpasmRegister_aarch64_V3: return "v3";
        case SpasmRegister_aarch64_V4: return "v4";
        case SpasmRegister_aarch64_V5: return "v5";
        case SpasmRegister_aarch64_V6: return "v6";
        case SpasmRegister_aarch64_V7: return "v7";
        case SpasmRegister_aarch64_V8: return "v8";
        case SpasmRegister_aarch64_V9: return "v9";
        case SpasmRegister_aarch64_V10: return "v10";
        case SpasmRegister_aarch64_V11: return "v11";
        case SpasmRegister_aarch64_V12: return "v12";
        case SpasmRegister_aarch64_V13: return "v13";
        case SpasmRegister_aarch64_V14: return "v14";
        case SpasmRegister_aarch64_V15: return "v15";
        case SpasmRegister_aarch64_V16: return "v16";
        case SpasmRegister_aarch64_V17: return "v17";
        case SpasmRegister_aarch64_V18: return "v18";
        case SpasmRegister_aarch64_V19: return "v19";
        case SpasmRegister_aarch64_V20: return "v20";
        case SpasmRegister_aarch64_V21: return "v21";
        case SpasmRegister_aarch64_V22: return "v22";
        case SpasmRegister_aarch64_V23: return "v23";
        case SpasmRegister_aarch64_V24: return "v24";
        case SpasmRegister_aarch64_V25: return "v25";
        case SpasmRegister_aarch64_V26: return "v26";
        case SpasmRegister_aarch64_V27: return "v27";
        case SpasmRegister_aarch64_V28: return "v28";
        case SpasmRegister_aarch64_V29: return "v29";
        case SpasmRegister_aarch64_V30: return "v30";
        case SpasmRegister_aarch64_V31: return "v31";
        default: return "???";
    }
}

void spasm_aarch64_instructions_debug(SpasmInstructions* instructions, int32_t fd)
{
    SPASM_NOT_IMPLEMENTED;
}

#endif /* defined(SPASM_ENABLE_AARCH64) */

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "test_encoding_common.h"

/* movaps xmm0, xmm1 */
int main(void)
{
    /* 0F 28 C1 */
    const uint8_t expected[] = {
        0x0F, 0x28, 0xC1
    };

    assemble_and_expect("movaps",
        SpasmOpVector(SpasmRegister_x86_64_XMM0),
        SpasmOpVector(SpasmRegister_x86_64_XMM1),
        expected, sizeof(expected));
    return 0;
}

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/register.h"
#include "spasm/error.h"

#include <string.h>

#define EXPECT_REG(name, reg)                                                        \
    SPASM_ASSERT(spasm_register_from_string(name, strlen(name)) == (reg), "lookup failed: " name)

int main(void)
{
    EXPECT_REG("rax", SpasmRegister_x86_64_RAX);
    EXPECT_REG("RAX", SpasmRegister_x86_64_RAX);
    EXPECT_REG("r15", SpasmRegister_x86_64_R15);
    EXPECT_REG("r12d", SpasmRegister_x86_64_R12D);
    EXPECT_REG("bp", SpasmRegister_x86_64_BP);
    EXPECT_REG("dil", SpasmRegister_x86_64_DIL);
    EXPECT_REG("r9b", SpasmRegister_x86_64_R9B);
    EXPECT_REG("r9l", SpasmRegister_x86_64_R9B);
    EXPECT_REG("Xmm7", SpasmRegister_x86_64_XMM7);
    EXPECT_REG("ymm15", SpasmRegister_x86_64_YMM15);
    EXPECT_REG("k3", SpasmRegister_x86_64_K3);
    EXPECT_REG("rip", SpasmRegister_x86_64_RIP);
    EXPECT_REG("eip", SpasmRegister_x86_64_EIP);
    EXPECT_REG("ah", SpasmRegister_x86_64_AH);
    EXPECT_REG("BH", SpasmRegister_x86_64_BH);
    EXPECT_REG("xmm16", SpasmRegister_x86_64_XMM16);
    EXPECT_REG("ymm31", SpasmRegister_x86_64_YMM31);
    EXPECT_REG("zmm0", SpasmRegister_x86_64_ZMM0);
    EXPECT_REG("zmm31", SpasmRegister_x86_64_ZMM31);

    EXPECT_REG("rax2", SpasmRegister_Invalid);
    EXPECT_REG("xmm32", SpasmRegister_Invalid);
    EXPECT_REG("", SpasmRegister_Invalid);

    /* Not null-terminated: only the first 3 characters are looked up */
    SPASM_ASSERT(spasm_register_from_string("rcx, rdx", 3) == SpasmRegister_x86_64_RCX,
                 "lookup failed: non null-terminated");

    return 0;
}

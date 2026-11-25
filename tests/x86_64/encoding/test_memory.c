/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "test_encoding_common.h"

#define RAX SpasmRegister_x86_64_RAX
#define RBX SpasmRegister_x86_64_RBX
#define RCX SpasmRegister_x86_64_RCX
#define RSP SpasmRegister_x86_64_RSP
#define RBP SpasmRegister_x86_64_RBP
#define R8 SpasmRegister_x86_64_R8
#define R9 SpasmRegister_x86_64_R9
#define R10 SpasmRegister_x86_64_R10
#define R12 SpasmRegister_x86_64_R12
#define R13 SpasmRegister_x86_64_R13
#define RIP SpasmRegister_x86_64_RIP
#define EAX SpasmRegister_x86_64_EAX
#define NONE SpasmRegister_x86_64_NONE
#define EBX SpasmRegister_x86_64_EBX
#define ECX SpasmRegister_x86_64_ECX
#define ESP SpasmRegister_x86_64_ESP
#define R13D SpasmRegister_x86_64_R13D
#define EIP SpasmRegister_x86_64_EIP

typedef struct
{
    const char* mnemonic;
    SpasmOperand dst;
    SpasmOperand src;
    uint8_t expected[16];
    size_t expected_size;
} MemoryTest;

int main(void)
{
    const MemoryTest tests[] = {
        /* mov rax, [rsp]: rsp as base needs a SIB */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(RSP, NONE, 0, 1), { 0x48, 0x8B, 0x04, 0x24 }, 4 },
        /* mov rax, [r12] */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(R12, NONE, 0, 1), { 0x49, 0x8B, 0x04, 0x24 }, 4 },
        /* mov rax, [rbp]: rbp as base needs a zero disp8 */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(RBP, NONE, 0, 1), { 0x48, 0x8B, 0x45, 0x00 }, 4 },
        /* mov rax, [r13] */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(R13, NONE, 0, 1), { 0x49, 0x8B, 0x45, 0x00 }, 4 },
        /* mov rax, [rbp + rcx * 4 - 8] */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(RBP, RCX, -8, 4), { 0x48, 0x8B, 0x44, 0x8D, 0xF8 }, 5 },
        /* mov r8, [r9 + r10 * 8 + 0x12345] */
        { "mov", SpasmOpReg(R8), SpasmOpMemory(R9, R10, 0x12345, 8),
          { 0x4F, 0x8B, 0x84, 0xD1, 0x45, 0x23, 0x01, 0x00 }, 8 },
        /* mov rax, [rip + 0x40] */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(RIP, NONE, 0x40, 1),
          { 0x48, 0x8B, 0x05, 0x40, 0x00, 0x00, 0x00 }, 7 },
        /* mov rax, [0x1000]: absolute, needs a SIB without base (mod=00 rm=101 is rip-relative) */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(NONE, NONE, 0x1000, 1),
          { 0x48, 0x8B, 0x04, 0x25, 0x00, 0x10, 0x00, 0x00 }, 8 },
        /* mov rax, [rcx * 2 + 16]: no base, always disp32 */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(NONE, RCX, 16, 2),
          { 0x48, 0x8B, 0x04, 0x4D, 0x10, 0x00, 0x00, 0x00 }, 8 },
        /* mov rax, [r13 + r12 * 2]: r12 is a valid index, r13 base needs a zero disp8 */
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(R13, R12, 0, 2), { 0x4B, 0x8B, 0x44, 0x65, 0x00 }, 5 },
        /* disp8 / disp32 boundaries */
        { "mov", SpasmOpReg(EAX), SpasmOpMemory(RBX, NONE, 127, 1), { 0x8B, 0x43, 0x7F }, 3 },
        { "mov", SpasmOpReg(EAX), SpasmOpMemory(RBX, NONE, 128, 1), { 0x8B, 0x83, 0x80, 0x00, 0x00, 0x00 }, 6 },
        { "mov", SpasmOpReg(EAX), SpasmOpMemory(RBX, NONE, -128, 1), { 0x8B, 0x43, 0x80 }, 3 },
        { "mov", SpasmOpReg(EAX), SpasmOpMemory(RBX, NONE, -129, 1), { 0x8B, 0x83, 0x7F, 0xFF, 0xFF, 0xFF }, 6 },
        /* add qword ptr [rax], 5 */
        { "add", SpasmOpMemQword(RAX, NONE, 0, 1), SpasmOpImm32(5), { 0x48, 0x83, 0x00, 0x05 }, 4 },
        /* 32-bit addressing: 67 prefix, same ModRM/SIB rules */
        { "lea", SpasmOpReg(EAX), SpasmOpMemory(EBX, ECX, 0, 2), { 0x67, 0x8D, 0x04, 0x4B }, 4 },
        { "mov", SpasmOpReg(EAX), SpasmOpMemory(ESP, NONE, 0, 1), { 0x67, 0x8B, 0x04, 0x24 }, 4 },
        { "mov", SpasmOpReg(EAX), SpasmOpMemory(R13D, NONE, 0, 1), { 0x67, 0x41, 0x8B, 0x45, 0x00 }, 5 },
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(EIP, NONE, 64, 1),
          { 0x67, 0x48, 0x8B, 0x05, 0x40, 0x00, 0x00, 0x00 }, 8 },
        { "mov", SpasmOpReg(RAX), SpasmOpMemory(NONE, ECX, 16, 4),
          { 0x67, 0x48, 0x8B, 0x04, 0x8D, 0x10, 0x00, 0x00, 0x00 }, 9 },
        /* lea rax, [rsp + r12 * 8] */
        { "lea", SpasmOpReg(RAX), SpasmOpMemory(RSP, R12, 0, 8), { 0x4A, 0x8D, 0x04, 0xE4 }, 4 },
    };

    for(size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++)
        assemble_and_expect(tests[i].mnemonic, tests[i].dst, tests[i].src, tests[i].expected, tests[i].expected_size);

    /* The memory size of add [rax], 5 cannot be deduced */
    assemble_and_expect_failure("add", SpasmOpMemory(RAX, NONE, 0, 1), SpasmOpImm8(5));

    /* rsp cannot be an index */
    assemble_and_expect_failure("mov", SpasmOpReg(RAX), SpasmOpMemory(RAX, RSP, 0, 1));

    /* rip-relative cannot have an index */
    assemble_and_expect_failure("mov", SpasmOpReg(RAX), SpasmOpMemory(RIP, RCX, 0, 1));

    /* Mixed address sizes */
    assemble_and_expect_failure("mov", SpasmOpReg(RAX), SpasmOpMemory(RAX, ECX, 0, 2));
    assemble_and_expect_failure("mov", SpasmOpReg(RAX), SpasmOpMemory(EBX, RCX, 0, 2));

    /* eip-relative cannot have an index, esp cannot be an index */
    assemble_and_expect_failure("mov", SpasmOpReg(RAX), SpasmOpMemory(EIP, ECX, 0, 1));
    assemble_and_expect_failure("mov", SpasmOpReg(RAX), SpasmOpMemory(EBX, ESP, 0, 1));

    /* Invalid scale */
    assemble_and_expect_failure("mov", SpasmOpReg(RAX), SpasmOpMemory(RAX, RCX, 0, 3));

    return 0;
}

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/parser.h"
#include "spasm/flat.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHECK(expr, message)                                                                  \
    do                                                                                        \
    {                                                                                         \
        if(!(expr))                                                                           \
        {                                                                                     \
            fprintf(stderr, "%s:%d: check failed: %s (%s)\n", __FILE__, __LINE__, #expr, message); \
            abort();                                                                          \
        }                                                                                     \
    } while(0)

static void print_bytes(const uint8_t* bytes, size_t size)
{
    for(size_t i = 0; i < size; i++)
        fprintf(stderr, "%02x%s", bytes[i], (i + 1) % 16 == 0 ? "\n" : " ");

    fprintf(stderr, "\n");
}

static void expect_image(const char* source, uint64_t base_address, const uint8_t* expected, size_t expected_size)
{
    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;
    SpasmByteCode image = spasm_bytecode_new();

    CHECK(spasm_data_init(&data), "data init failed");
    CHECK(spasm_parse(source, strlen(source), "test.s", &data, &instructions), "parsing failed");
    CHECK(spasm_assemble_flat(SpasmABI_LinuxX64, &instructions, &data, base_address, &image, NULL),
          "flat assembly failed");

    size_t size;
    const SpasmByte* bytes = spasm_bytecode_get(&image, &size);

    if(size != expected_size || memcmp(bytes, expected, expected_size) != 0)
    {
        fprintf(stderr, "expected:\n");
        print_bytes(expected, expected_size);
        fprintf(stderr, "got:\n");
        print_bytes(bytes, size);
        CHECK(false, "image mismatch");
    }

    spasm_bytecode_destroy(&image);
    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
}

static void expect_parse_error(const char* source)
{
    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;

    CHECK(spasm_data_init(&data), "data init failed");
    CHECK(!spasm_parse(source, strlen(source), "error.s", &data, &instructions), source);

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
}

/* Instructions bytes from llvm-mc (symbols replaced by their address/displacement) */
static void test_program(void)
{
    const char* source =
        ".intel_syntax noprefix\n"
        ".equ COUNT, 4\n"
        ".set STRIDE, COUNT * 2   # constants can use constants\n"
        "\n"
        ".text\n"
        "start:\n"
        "    lea rsi, [rip + msg]\n"
        "    mov ecx, COUNT\n"
        "loop: mov al, byte ptr [rsi + rcx*1 - 1] ; label and instruction on the same line\n"
        "    ADD QWORD PTR [rbx + 8*rcx + STRIDE], 0x10\n"
        "    dec ecx\n"
        "    jnz loop\n"
        "    mov rax, table + 8\n"
        "    mov edx, dword ptr [counter]\n"
        "    vaddps zmm0 {k1}{z}, zmm1, dword ptr [rax]{1to16}\n"
        "    vaddps zmm2, zmm3, zmm4, {rn-sae}\n"
        "    vpgatherdd ymm0, [rax + ymm1*4], ymm2\n"
        "    mov ah, '\\n'\n"
        "    ret\n"
        "\n"
        ".section .rodata, \"a\"\n"
        "msg: .asciz \"hi\\n\"\n"
        "    .align 8\n"
        "table: .quad 1, -1\n"
        ".data\n"
        "counter: .long 0x11223344\n"
        "         .byte 1, 'a', \"bc\"\n"
        ".bss\n"
        "buffer: .zero 32\n";

    /* msg at 0x400040, table at 0x400048, counter at 0x400060, buffer at 0x400070 */
    const uint8_t expected[] = {
        0x48, 0x8d, 0x35, 0x39, 0x00, 0x00, 0x00, /* lea rsi, [rip + 0x39] */
        0xb9, 0x04, 0x00, 0x00, 0x00,             /* mov ecx, 4 */
        0x8a, 0x44, 0x0e, 0xff,                   /* mov al, byte ptr [rsi + rcx - 1] */
        0x48, 0x83, 0x44, 0xcb, 0x08, 0x10,       /* add qword ptr [rbx + rcx*8 + 8], 16 */
        0xff, 0xc9,                               /* dec ecx */
        0x75, 0xf2,                               /* jnz loop */
        0x48, 0xc7, 0xc0, 0x50, 0x00, 0x40, 0x00, /* mov rax, 0x400050 */
        0x8b, 0x14, 0x25, 0x60, 0x00, 0x40, 0x00, /* mov edx, dword ptr [0x400060] */
        0x62, 0xf1, 0x74, 0xd9, 0x58, 0x00,       /* vaddps zmm0 {k1} {z}, zmm1, dword ptr [rax]{1to16} */
        0x62, 0xf1, 0x64, 0x18, 0x58, 0xd4,       /* vaddps zmm2, zmm3, zmm4, {rn-sae} */
        0xc4, 0xe2, 0x6d, 0x90, 0x04, 0x88,       /* vpgatherdd ymm0, [rax + ymm1*4], ymm2 */
        0xb4, 0x0a,                               /* mov ah, 10 */
        0xc3,                                     /* ret */
        0x00, 0x00, 0x00,
        'h', 'i', '\n', 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x44, 0x33, 0x22, 0x11, 0x01, 'a', 'b', 'c',
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    };

    expect_image(source, 0x400000, expected, sizeof(expected));
}

static void test_data_blocks(void)
{
    const char* source =
        ".rodata\n"
        "    .byte 1, 2, 3          # anonymous block\n"
        ".p2align 4                 # pads the anonymous block\n"
        "values: .word 0xffff, -1\n"
        "    .balign 8\n"
        "    .dword -2147483648, 4294967295\n"
        ".data\n"
        "flags: .byte 0x80\n"
        "    .zero 3, 0xAA\n"
        "    .ascii \"a\\x41\\t\", \"\\\"\"\n"
        ".bss\n"
        ".align 64\n"
        "big: .space 100\n"
        ".align 16\n";

    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;

    CHECK(spasm_data_init(&data), "data init failed");
    CHECK(spasm_parse(source, strlen(source), "data.s", &data, &instructions), "parsing failed");
    CHECK(spasm_data_num_definitions(&data) == 4, "4 data blocks");

    const SpasmDataDefinition* anonymous = spasm_data_get_definition(&data, 0);
    CHECK(anonymous->size == 16 && anonymous->alignment == 16 && anonymous->type == SpasmDataType_ROData,
          ".p2align pads the current block");
    CHECK(memcmp(spasm_data_get_bytes(&data, anonymous), "\x01\x02\x03", 3) == 0, "anonymous bytes");

    const SpasmDataDefinition* values = spasm_data_find_definition(&data, "values", 6);
    const uint8_t values_bytes[] = { 0xff, 0xff, 0xff, 0xff, 0, 0, 0, 0, 0, 0, 0, 0x80, 0xff, 0xff, 0xff, 0xff };
    CHECK(values != NULL && values->alignment == 8 && values->size == sizeof(values_bytes), "values block");
    CHECK(memcmp(spasm_data_get_bytes(&data, values), values_bytes, sizeof(values_bytes)) == 0, "values bytes");

    const SpasmDataDefinition* flags = spasm_data_find_definition(&data, "flags", 5);
    CHECK(flags != NULL && flags->type == SpasmDataType_Data && flags->size == 8 && flags->alignment == 1, "flags block");
    CHECK(memcmp(spasm_data_get_bytes(&data, flags), "\x80\xaa\xaa\xaa" "aA\t\"", 8) == 0, "flags bytes");

    const SpasmDataDefinition* big = spasm_data_find_definition(&data, "big", 3);
    CHECK(big != NULL && big->type == SpasmDataType_BSS && big->alignment == 64 && big->size == 112, "big block");

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
}

static void test_errors(void)
{
    expect_parse_error("    movv rax, rbx\n");
    expect_parse_error("    mov rax, [rbx + rcx*3]\n");
    expect_parse_error("    mov rax, [rbx + rcx + rdx]\n");
    expect_parse_error("    mov rax, [rbx - rcx]\n");
    expect_parse_error("    mov rax, [rbx + 0x100000000]\n");
    expect_parse_error("    mov rax, [rbx\n");
    expect_parse_error("    mov rax, 1 2\n");
    expect_parse_error("    mov rax, 0x\n");
    expect_parse_error("    mov rax, 12abc\n");
    expect_parse_error("    mov rax, 0xffffffffffffffffff\n");
    expect_parse_error("    mov rax, -label\n");
    expect_parse_error("    mov rax, a + b\n");
    expect_parse_error("    mov rax, 1 / 0\n");
    expect_parse_error("    vaddps zmm0 {k9}, zmm1, zmm2\n");
    expect_parse_error("    vaddps zmm0, zmm1, zmm2 {rn-sae}\n");
    expect_parse_error("    vaddps zmm0, zmm1, zmm2 {1to16}\n");
    expect_parse_error("    mov rax, qword rbx\n");
    expect_parse_error("rax: nop\n");
    expect_parse_error("a: nop\na: nop\n");
    expect_parse_error(".equ A, 1\nA: nop\n");
    expect_parse_error(".foo 1\n");
    expect_parse_error(".att_syntax\n");
    expect_parse_error(".byte 1\n");
    expect_parse_error(".data\n nop\n");
    expect_parse_error(".data\n .byte 256\n");
    expect_parse_error(".data\n .word -32769\n");
    expect_parse_error(".data\n .ascii \"abc\n");
    expect_parse_error(".data\n .ascii \"\\q\"\n");
    expect_parse_error(".data\n .align 3\n");
    expect_parse_error(".data\n .byte undefined_constant\n");
    expect_parse_error(".bss\n .byte 1\n");
    expect_parse_error(".bss\n .zero 4, 1\n");
    expect_parse_error(".section .foo\n");
    expect_parse_error(".text\n .align 16\n");
    expect_parse_error("    nop\n    nop rax,\n    nop\n");
}

/* Every line is parsed even after an error, a valid program around invalid lines still fails */
static void test_error_recovery(void)
{
    const char* source = "    mov rax, 1\n"
                         "    bad1\n"
                         "    mov rbx, [rax +]\n"
                         "    ret\n";

    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;

    CHECK(spasm_data_init(&data), "data init failed");
    CHECK(!spasm_parse(source, strlen(source), "recovery.s", &data, &instructions), "parsing should fail");
    CHECK(spasm_instructions_size(&instructions) == 2, "valid lines are kept");
    CHECK(spasm_instructions_at(&instructions, 1)->line == 4, "line numbers");

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
}

int main(void)
{
    test_program();
    test_data_blocks();
    test_errors();
    test_error_recovery();

    return 0;
}

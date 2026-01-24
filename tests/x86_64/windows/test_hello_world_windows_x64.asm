; SPDX-License-Identifier: BSD-3-Clause
; Copyright (c) 2025 - Present Romain Augier
; All rights reserved.

; .const section is just used to place numeric variables that will be replaced in the assembly
; by the numeric values, think like macros
.const
    message_len u64 13

; .data section contains readable/writable data
.data
    written u32 0

; .rodata section contains readable data
.rodata
    message str "Hello World!\n\0"


; .code section contains the assembly code
.code

extern GetStdHandle
extern WriteFile
extern ExitProcess

entry main

main:
    sub rsp, 0x28

    mov rcx, -11       ; stdout
    call GetStdHandle

    test rax, rax
    js error

    mov rcx, rax
    lea rdx, [message]
    mov r8, message_len
    lea r9, [written]
    xor rax, rax
    push rax

    call WriteFile

    add rsp, 8

    test r9, message_len
    jne error

    test rax, rax
    jz error

    xor ecx, ecx
    call ExitProcess

error:
    mov rcx, 1
    call ExitProcess

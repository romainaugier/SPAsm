global main

.data
    message db "Hello, World!\n"
    message_len 15

.code
main:
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, message_len
    syscall

    mov rax, 60,
    mov rdi, 0
    syscall
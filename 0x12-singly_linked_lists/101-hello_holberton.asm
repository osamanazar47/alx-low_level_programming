section .data
    format db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    push format
    call printf

    mov eax, 0
    ret

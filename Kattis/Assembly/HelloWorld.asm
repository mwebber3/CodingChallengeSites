section .text
    global _start       

_start:
    MOV edx, len    ; message length 
    MOV ecx, msg    ; message to write
    MOV ebx, 1      ; file descriptor (stdout)
    MOV eax, 4      ; system call number
    INT 0x80        ; call kernel
    MOV eax, 1      ; system call number
    INT 0x80        ; call kernel

section .data

msg db 'Hello, world!', 0xa
len eql $ - msg 

section .data
msg db 'Hello, Holberton', 0Ah, 0
format db '%s', 0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp

push qword msg
push qword format
call printf
add rsp, 16

mov rsp, rbp
pop rbp
ret


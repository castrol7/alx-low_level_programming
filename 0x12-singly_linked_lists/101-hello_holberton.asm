section .data
hello db "Hello, Holberton", 10, 0
hello_len equ $ - hello
format db "%s", 10, 0

section .text
global main
extern printf, malloc, free, exit

main:
; Allocate memory for a list_t node
mov rdi, 8
call malloc
mov qword [rax], 0 ; set next field to NULL

; Allocate memory for the string
mov rdi, hello_len
call malloc

; Copy the string into the allocated memory
mov rsi, hello
mov rdi, [rax + 8] ; get pointer to str field
mov ecx, hello_len
rep movsb

; Set the len field of the node
mov dword [rax + 16], ecx

; Call printf to print the string
mov rdi, format
mov rsi, [rax + 8] ; get pointer to str field
xor eax, eax
call printf

; Free the memory
mov rdi, [rax + 8] ; get pointer to str field
call free
mov rdi, rax ; pointer to node
call free

; Exit
xor edi, edi
call exit


SECTION .data
msg:      db "Hello, Holberton", 0
fmt:      db "%s", 10, 0

SECTION .text
extern printf
global main
main:

mov rsi, msg    ; 64-bit Direccion comienzo de la cadena
mov rdi, fmt    ; Formato de la cadena
mov rax, 0      ; printf is varargs,  EAX cuenta

;el numero de argumentos no enteros pasados
call printf

mov ebx, 0      ; normal-exit code
mov eax, 1      ; process-termination service
int 0x80        ; linux kernel service

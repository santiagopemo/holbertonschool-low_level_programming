SECTION .data
msg:      db "Hello, Holberton", 0
fmt:      db "%s", 10, 0

SECTION .text
extern printf
global main
main:

push rbp
mov rsi, msg    ; 64-bit Direccion comienzo de la cadena
mov rdi, fmt    ; Formato de la cadena
mov rax, 0      ; printf is varargs,  EAX cuenta

;el numero de argumentos no enteros pasados
call printf

pop rbp
mov rax, 0      ; process-termination service
ret

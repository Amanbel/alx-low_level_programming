global _start

section .text:

_start:
	mov eax, 0x4
	mov ebx, 1
	mov ecx, msg
	mov edx, len
	int 0x80

	mov eax, 0x1
	mov ebx, 0
	int 0x80

section .data:
	msg db "Hello, Holberton",0xa
	len equ $-msg

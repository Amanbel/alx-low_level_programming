section .text
	global main

main:
	mov eax, 0x4	;sys_write
	mov ebx, 1	;standard output
	mov ecx, msg	;message var
	mov edx, len	;lenght of message
	int 0x80

	mov eax, 0x1
	mov ebx, 0
	int 0x80

section .data
	msg db "Hello, Holberton", 0xa
	len equ $-msg

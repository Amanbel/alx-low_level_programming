section .text
	global main

main:
	mov edx, len	;length of mess
	mov ecx, msg	;message
	mov ebx, 1	;standard output
	mov eax, 4	;sys_write call
	int 0x80	;call karnel

	mov eax, 1
	int 0x80	;call karnel

section .data
	msg db "Hello, Holberton", 0xa	;assigning bytes to mess
	len equ $-msg	;length equal to mess

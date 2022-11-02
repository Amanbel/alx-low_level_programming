#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 * @s: the string about to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}


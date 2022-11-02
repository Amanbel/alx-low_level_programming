#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a reversed string
 * @s: the string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

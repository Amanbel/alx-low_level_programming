#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - reverses a given string
 * @s:the given string
 * Return: Nothing
 */

void print_rev(char *s)
{
	unsigned long int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar(10);
}

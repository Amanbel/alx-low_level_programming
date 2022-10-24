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
	unsigned long int n = 0;

	for (i = strlen(s) - 1; i >= n; i--)
	{
		putchar(s[i]);
	}
	putchar(10);
}

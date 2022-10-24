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
	int i;
	int n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar(10);
}

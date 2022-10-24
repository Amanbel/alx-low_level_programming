#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int hlen = (strlen(str) - 1) / 2;
	int len = strlen(str) - 1;

	for (i = hlen - 1; i <= len; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}

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
	int hlen = (strlen(str)) / 2;
	int len = strlen(str) - 1;
	int leng = strlen(str);
	int hleng = (strlen(str) - 1) / 2;

	if (leng % 2 == 0)
	{
		for (i = hlen; i <= len; i++)
	{
			putchar(str[i]);
	}
	}
	else
	{
		for (i = hleng + 1; i <= len; i++)
		{
			putchar(str[i]);
		}
	}
	putchar(10);
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - prints a string to the standard output
 * @str: the string
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}

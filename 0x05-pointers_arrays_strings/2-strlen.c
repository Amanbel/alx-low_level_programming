#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s:the given string
 * Return: 0 (may have skipped the loop)
 */

int _strlen(char *s)
{
	int n = 0;
	int i;

	for (i = 0; i >= 0 ; i++)
	{
		if (s[i] != 0)
		{
			n++;
		}
		else
		{
			return (n);
		}
	}
	return (0);
}

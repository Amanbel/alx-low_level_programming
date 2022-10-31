#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: the memory area
 * @b: character
 * @n: number of times
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

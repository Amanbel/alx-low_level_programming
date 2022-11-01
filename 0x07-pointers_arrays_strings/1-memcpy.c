#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: copied to
 * @src: copied from
 * @n: number of times to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

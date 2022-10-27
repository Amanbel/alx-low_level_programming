#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copys one string to another
 * @dest:destination
 * @src:source
 * @n:number of copys
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

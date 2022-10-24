#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copies string
 * @dest:copied into
 * @src:copied from
 * Return: somevalue
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = strlen(src);

	for (i = 0; i <= j; i++)
	{
		dest[i] = j[i];
	}

	return (dest);
}

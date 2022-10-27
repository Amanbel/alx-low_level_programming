#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatinates two strings n times
 * @dest: first string
 * @src: second string
 * @n: amount of bytes to concatinate
 * Return: concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);
	int j = (n - 1);

	for (i = 0; i <= j; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}

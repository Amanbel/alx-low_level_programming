#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: first string
 * @src: second string
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int leng = strlen(src);
	int len = strlen(dest);

	for (i = 0; i < leng; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}

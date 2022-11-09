#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - duplicates a given string
 * @str: given string
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	if (!str)
		return (NULL);

	int i;
	int n = strlen(str) + 1;
	char *p = malloc(n);

	if (!p)
		return (NULL);

	for (i = 0; i <= n; i++)
		*(p + i) = *(str + i);

	return (p);
}

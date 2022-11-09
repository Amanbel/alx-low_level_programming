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
	unsigned int i;
	unsigned int n = strlen(str);
	char *p = malloc(n * sizeof(char));

	if (p == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= n; i++)
	{
		*(p + i) = *(str + i);
	}

	return (p);
}

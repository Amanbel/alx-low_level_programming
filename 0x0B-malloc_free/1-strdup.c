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

	if (!str)
		return (NULL);

	char *p = malloc((strlen(str) + 1) * sizeof(char));

	if (!p)
		return (NULL);

	for (i = 0; i <= strlen(str) + 1; i++)
	{
		*(p + i) = *(str + i);
		if (i == n)
			return (p);
	}

	return (NULL);
}

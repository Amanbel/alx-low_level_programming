#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence
 * @s: the string
 * @c: the character that is supposed to be returned
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	int i;
	int n = strlen(s);

	for (i = 0; i < n; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}

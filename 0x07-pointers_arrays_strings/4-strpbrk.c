#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - returns the number of bytes that are in both s and accept
 * @s: first string
 * @accept: second string
 * Return: number of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int n = strlen(s);
	int m = strlen(accept);

	for (i = 0; i < n; i++)
	{

		for (j = 0; j < m; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}

	}
	return (NULL);
}

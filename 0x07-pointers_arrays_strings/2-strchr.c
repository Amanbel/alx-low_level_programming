#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence of the character c in the string s
 * @s: the string
 * @c: the character that is supposed to be returned
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	int i, j;
	char m[];
	int n = strlen(s);
	int k = 0;

	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
		{
			for (j = i; j < n; j++)
			{
				m[k] = *(s + j);
				k++;
				if (j == (n - 1))
				{
					m[k] = '\0';
				}
			}
			return (m);
		}
	}
	return (NULL);
}

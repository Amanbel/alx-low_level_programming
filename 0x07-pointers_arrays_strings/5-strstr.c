#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - finds the substring
 * @haystack: where the substring is searched
 * @needle: the substring itself
 * Return: a pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, l;
	int z = 1;
	int n = strlen(haystack);
	int m = strlen(needle);
	int d = 0;

	if (!*needle)
		return (haystack);
	for (i = 0; i < n; i++)
	{
		l = i;
		if (needle[d] == haystack[i])
		{
			while (z)
			{
				if (needle[d] == haystack[i])
				{
					i++;
					d++;
				}
				else
				{
					if (d == (m - 1))
					{
						return (haystack + l);
					}
					i = l;
					d = 0;
					break;
				}
			}
		}
	}
	return (NULL);
}

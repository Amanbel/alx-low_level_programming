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
	char *occ, *temp;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occ = haystack;
			temp = needle;
			while (*temp)
			{
				if (*haystack++ ! *temp++)
				{
					haystack = occ;
					break;
				}
			}
			if (occ != haystack)
				return (occ);
		}
		haystack++;
	}
	return (NULL);
}

#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatinates two strings
 * taking n bytes from second string
 * @s1: first str
 * @s2: second str
 * @n: bytes
 * Return: pointer to the concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *p;
	unsigned int m, o, sum;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	j = 0;
	m = strlen(s1);
	o = strlen(s2);
	sum = m + o;

	p = malloc(sum * sizeof(char) + 1);

	if(!p)
		return (NULL);

	for (i = 0; i <= m; i++)
	{
		*(p + i) = *(s1 + i);

		if (*(s1 + i) == '\0')
		{
			if (*(s2 + j))
			{
				while (j < n)
				{
					*(p + i) = *(s2 + j);
					j++;
					if (*(s2 + j) == '\0')
						return (p);
					i++;
				}
				*(p + (j + 1)) = '\0';
				return (p);
			}
			return (p);
		}
	}
	return (p);
}

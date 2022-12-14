#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatiate to strings
 * @s1: first str
 * @s2: second str
 * Return: pointer to concatinated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, n, m, sum;
	char *p;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	n = strlen(s1);
	m = strlen(s2);
	sum = n + m + 1;
	p = malloc(sum * sizeof(char));

	if (!p)
		return (NULL);

	for (i = 0; i <= n; i++)
	{
		*(p + i) = *(s1 + i);

		if (*(p + i) == '\0')
		{
			for (j = 0; j <= m; j++)
			{
				*(p + i) = *(s2 + j);
				i++;
			}
		}
	}
	return (p);
}


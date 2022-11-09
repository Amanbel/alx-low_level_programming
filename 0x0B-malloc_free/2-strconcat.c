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

	if (!s1 && !s2)
		return (NULL);

	n = strlen(s1) + 1;
	m = strlen(s2) + 1;
	sum = n + m;
	p = malloc(sum * sizeof(char));

	for (i = 0; i <= n; i++)
	{
		*(p + i) = *(s1 + i);

		if (i == n)
		{
			for (j = 0; j <= m; j++)
			{
				i++;
				*(p + i) = *(s2 + j);
			}
		}
	}
	return (p);
}

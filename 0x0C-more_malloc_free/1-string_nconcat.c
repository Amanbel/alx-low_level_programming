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
	char *p;
	unsigned int m, o, sum, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	m = strlen(s1);
	o = strlen(s2);

	if (n < o)
		o = n;

	sum = m + o;

	p = malloc((sum + 1) * sizeof(char *));

	if(!p)
		return (NULL);

	for (i = 0; i < m; i++)
		p[i] = s1[i];
	for (j = 0; i < sum; j++)
	{
		p[i] = s2[j];
		i++;
	}
	i++;
	p[i] = '\0';
	return (p);
}

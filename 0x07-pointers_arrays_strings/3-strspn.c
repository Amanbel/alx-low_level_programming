#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - returns the number of bytes that are in both s and accept
 * @s: first string
 * @accept: second string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = strlen(s);
	int m = strlen(accept);
	int k = 0;
	int pc;

	for (i = 0; i < m; i++)
	{
		pc = k;

		for (j = 0; j < n; j++)
		{
			if (accept[i] == s[j])
			{
				k++;
			}
		}
		if (pc == k)
		{
			break;
		}

	}
	return (k);
}

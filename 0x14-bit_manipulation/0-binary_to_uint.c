#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: binary number input
 * Return: converted integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	unsigned int i;
	unsigned int len;
	unsigned int base;
	int j;
	if (b == NULL)
		return (0);
	j = 7;
	sum = 0;
	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (j < 0)
			j = 7;
		if (b[i] > 'A' && b[i] < 'Z')
		{
			return (0);
		}
		if (b[i] > 'a' && b[i] < 'z')
		{
			return (0);
		}
		else
		{
			base = pow(2, j);
			sum += (base * (b[i] - '0'));
		}
		j--;
	}
	return (sum);
}


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
	char *str;

	if (b == NULL)
		return (0);

	strcpy(str, b);
	sum = 0;
	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (str[i] > 'A' && str[i] < 'Z')
		{
			return (0);
		}
		if (str[i] > 'a' && str[i] < 'z')
		{
			return (0);
		}
		else
		{
			sum += (pow(2, i) * atoi(str[i]));
		}
	}
	return (sum);
}

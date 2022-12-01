#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: binary number input
 * Return: converted integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i;

	if (b == NULL)
		return (0);

	unsigned int len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] > 'A' && b[i] < 'Z')
		{
			return (0);
		}
		else if (b[i] > 'a' && b[i] < 'z')
		{
			return (0);
		}
		else
		{
			sum += (pow(2,i) * atoi(b[i]));
		}
	}
	return (sum);
}

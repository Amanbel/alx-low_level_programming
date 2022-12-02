#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

int _pow(int t);

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
	int j;
	if (b == NULL)
		return (0);

	sum = 0;
	len = strlen(b);
	j = strlen(b) - 1;
	for (i = 0; i < len; i++)
	{
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
			sum += (_pow(i) * (b[j] - '0'));
		}
		j--;
	}
	return (sum);
}

/**
 * _pow - gives the power of two
 * @t: exponent
 * Return: result
 */

int _pow(int t)
{
	int mul;
	int i;

	if (t == 0)
		return (1);
	mul = 1;

	for (i = 0; i < t; i++)
	{
		mul *= 2;
	}
	return (mul);
}

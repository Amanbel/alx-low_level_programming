#include <stdio.h>
#include "main.h"

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


/**
 * print_binary - prints binary form of integer
 * @n: input integer
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0;
	int k;

	if (n == 0)
		printf("0\n");
	if (n == 1)
		printf("1\n");

	while (i <= n)
	{
		unsigned long int l = _pow(i);
		if (l <= n)
		{
			i++;
		}
		else
		{
			break;
		}
	}
	k = i - 1;
	while (k >= 0)
	{
		unsigned long int j = _pow(k);
		if (n >= j)
		{
			printf("%d", 1);
			n -= _pow(k);
		}
		else
		{
			printf("%d", 0);
		}
		k--;
	}
	printf("\n");
}

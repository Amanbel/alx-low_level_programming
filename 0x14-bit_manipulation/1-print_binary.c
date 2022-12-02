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
	unsigned long int i;
	unsigned long int j[32];
	unsigned long int b;
	unsigned long int f;
	unsigned long int k;
	unsigned long int bin[32];

	if (n == 0)
		printf("0\n");
	if (n == 1)
		printf("1\n");

	for (i = 0; i <= n; i++)
	{
		unsigned long int l = _pow(i);
		if (l <= n)
		{
			j[i] = _pow(i);
		}
		else
		{
			j[i] = '\0';
			break;
		}
	}
	k = 0;

	while (j[k])
		k++;
	b = 0;
	f = k - 1;

	while (j[f])
	{
		if (n >= j[f])
		{
			bin[b] = 1;
			n -= j[f];
		}
		else
		{
			bin[b] = 0;
		}
		f--;
		b++;
	}
	bin[b] = '\0';
	for (i = 0; i < k; i++)
		printf("%ld", bin[i]);
	printf("\n");
}

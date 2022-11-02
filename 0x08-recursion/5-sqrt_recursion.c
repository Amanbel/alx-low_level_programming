#include <stdio.h>
#include "main.h"

/**
 * test - test if their is a square root
 * @n: integer that is campared to the input
 * @m: input number
 * Return: the square root
 */

int test(int n, int m)
{
	if (n * n == m)
	{
		return (n);
	}
	if (n * n > m)
	{
		return (-1);
	}
	return (test(n + 1, m));
}

/**
 * _sqrt_recursion - return the square root
 * @n: input number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (test(1, n));
}

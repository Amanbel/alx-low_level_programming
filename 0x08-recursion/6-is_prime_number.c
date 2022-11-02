#include <stdio.h>
#include "main.h"

/**
 * test - tests a number if its prime
 * @n: integer
 * @m: input integer
 * Return: the result
 */

int test(int n, int m)
{
	if (m % n == 0 || m < 2)
		return (0);
	else if (n == m - 1)
		return (1);
	else if (m > n)
		return (test(n + 1, m));
	return (1);
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: input number
 * Return: 0 if even, 1 if prime
 */

int is_prime_number(int n)
{
	return (test(2, n));
}

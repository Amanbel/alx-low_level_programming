#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums up all the arguments given
 * @n: number of variable arguments
 * Return: the total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}

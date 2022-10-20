#include "main.h"

/**
 * largest_number - return the largest
 * @a:first integer
 * @b:second integer
 * @c:third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	if (b > a && a > c)
	{
		largest = b;
	}
	if (c > a && a > b)
	{
		largest = c;
	}

	return (largest);
}

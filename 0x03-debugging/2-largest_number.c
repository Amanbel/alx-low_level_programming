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
	if (a > b && a > c)
	{
		return (a);
	}
	else if (b > a && b > c)
	{
		return (b);
	}
	else
	{
		return (c);
	}
}

#include <stdio.h>
#include "main.h"

/**
 * factorial - finds the factorial of the number
 * @n: input number
 * Return: result factorial
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

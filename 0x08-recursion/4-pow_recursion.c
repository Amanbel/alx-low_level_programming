#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - finds the power of a number
 * @x: base number
 * @y: exponent
 * Return: result power
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		y--;
		return (x * _pow_recursion(x));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

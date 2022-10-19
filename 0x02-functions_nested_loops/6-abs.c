#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry Point
 * Discription: absolute value
 * @n: number to positive
 * Return: Nothing
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry Point
 * Discription: last digit
 * @a: numbers
 * Return: Nothing
 */

int print_last_digit(int a)
{
	int y;

	if (a < 10 || a > -10)
	{
		return (a);
	}
	else
	{
		y = a % 10;

		return (y);
	}
}

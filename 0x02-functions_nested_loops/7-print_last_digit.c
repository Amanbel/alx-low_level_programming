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
	if (a < 0)
	{
		a = a * -1;
	}
	
	_putchar((a % 10) + '0');

	return (a % 10);
}

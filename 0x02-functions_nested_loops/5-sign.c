#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry Point
 * Discription: prints the sign of number
 * @n: entered number
 * Return: Nothing
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}

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
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}

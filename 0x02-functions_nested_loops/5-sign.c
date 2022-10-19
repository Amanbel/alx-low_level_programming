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
		return (1);
		putchar(43);
	}
	else if (n < 0)
	{
		return (-1);
		putchar(45);
	}
	else
	{
		return (0);
		putchar(48);
	}
}

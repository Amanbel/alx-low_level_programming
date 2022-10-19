#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry Point
 * Discription: upto 98
 * @n: number
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar(n);
	}
	_putchar('\n');
}

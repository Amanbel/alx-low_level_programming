#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry Point
 * Discription: upto 98
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (int i = n; n >= 98; n--)
		{
			_putchar(n);
			_putchar(', ');
		}
	}
	else if (n < 98)
	{
		for(int i = n; n <= 98; n++)
		{
			_putchar(n);
			_putchar(', ');
		}
	}
	else
	{
		_putchar('98');
	}
	_putchar('\n');
}

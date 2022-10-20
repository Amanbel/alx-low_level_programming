#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry Point
 * Discription: printing diagonal lines
 * @n: number of times to print
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');

		if (i == (n - 1))
		{
			_putchar('\');
		}
	}

	_putchar('\n');
}

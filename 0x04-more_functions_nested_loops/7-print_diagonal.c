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

	for (i = 1; i <= n; i++)
	{
		_putchar(' ');

		if (i == n)
		{
			_putchar('\');
		}
	}

	_putchar('\n');
}

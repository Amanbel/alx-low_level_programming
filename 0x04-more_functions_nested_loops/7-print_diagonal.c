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
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{

			_putchar(' ');

			if (i == j)
			{
				_putchar('\\');
			}

		}
		_putchar('\n');
	}

	_putchar('\n');
}

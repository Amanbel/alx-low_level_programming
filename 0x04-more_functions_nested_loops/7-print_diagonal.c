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

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i != j)
			{
			_putchar(' ');
			}
			else if (i == j)
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}

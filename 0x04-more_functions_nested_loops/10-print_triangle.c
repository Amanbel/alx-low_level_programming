#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry Point
 * Discription: printing triangle
 * @size: dimensions
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (k = size - i; k > 0; k--)
			_putchar(' ');
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

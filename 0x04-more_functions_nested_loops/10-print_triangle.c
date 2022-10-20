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
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (i < j)
			{
			_putchar(' ');
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
	}
}

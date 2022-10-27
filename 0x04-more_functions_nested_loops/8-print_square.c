#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry Point
 * Discription: printing square
 * @size: dimension
 * Return: Nothing
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

	_putchar('\n');
	}
}

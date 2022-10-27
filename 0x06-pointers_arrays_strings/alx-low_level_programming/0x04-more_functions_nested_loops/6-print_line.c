#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry Point
 * Discription: print a line
 * @n: number of times to be printed
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

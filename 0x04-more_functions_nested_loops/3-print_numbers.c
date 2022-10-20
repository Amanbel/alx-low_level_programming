#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry Point
 * Discription: print num
 * Return: Nothing
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

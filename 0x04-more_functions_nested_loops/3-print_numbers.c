#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry Point
 * Discription: print num
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	for(i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}

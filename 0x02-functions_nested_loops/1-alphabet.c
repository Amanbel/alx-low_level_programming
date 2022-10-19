#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Discription: print alphabet
 * Return: Nothing
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
	}

	_putchar(10);
}

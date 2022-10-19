#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10- Entry Point
 * Discription: print alphabet ten times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int n = 1;

	while (n <= 10)
	{

	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	n++;
	}
}

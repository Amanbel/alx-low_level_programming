#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- Entry Point
 * Discription: print alphabet
 * Return: Nothing
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	putchar(10);
}

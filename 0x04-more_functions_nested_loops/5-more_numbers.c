#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry Point
 * Discription: print to 14, 10 times
 * Return: Nothing
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
			_putchar((j / 10) + '0');
			}
			if (j <= 14)
			{
			_putchar((j % 10) + '0');
			}
		}

		_putchar('\n');
	}
}

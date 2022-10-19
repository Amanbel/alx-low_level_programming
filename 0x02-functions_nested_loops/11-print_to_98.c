#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry Point
 * Discription: upto 98
 * @n: number
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
}

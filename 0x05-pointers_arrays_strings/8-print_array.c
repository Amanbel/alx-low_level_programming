#include <stdio.h>
#include "main.h"

/**
 * print_array - print array n number of times
 * @a:array
 * @n: number of times the array is printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(a[i]);
		if (i != (n - 1))
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
}

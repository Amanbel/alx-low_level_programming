#include <stdio.h>
#include "main.h"

/**
 * swap_int - function to swap to integers
 * @a:first integer
 * @b:second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

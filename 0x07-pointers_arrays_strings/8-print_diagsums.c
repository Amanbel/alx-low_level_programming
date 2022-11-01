#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of diagonals in a square array
 * @a: the array
 * @size: dimension of array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int prc, sum1, sum2, diagc, diagc2, row;

	prc = 0, sum1 = 0, sum2 = 0, diagc = 0, diagc2 = 0, row = 0;

	while (prc < size * size)
	{
		if (prc == diagc + (row * size))
			sum1 += a[prc];
		if (prc == (size - diagc2 - 1) + (row * size))
			sum2 += a[prc];
		if (((prc + 1) % size) == 0)
			row++, diag++, diagc2++;
		prc++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

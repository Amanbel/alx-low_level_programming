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
	int i = 0;
	int j = (size - 1);

	while (i < size)
	{
		sum += a[i][i];
		i++;
	}
	while (j >= 0)
	{
		sum2 += a[j][j];
		j--;
	}
	printf("%d, %d\n", sum, sum2);
}

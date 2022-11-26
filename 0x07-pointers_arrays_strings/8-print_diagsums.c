#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print diagonal sum
 * @a: array
 * @size: size of array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = (size - 1);
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += a[i][i];
		i++;
	}
	while (j >= 0)
	{
		sum2 += a[j][j];
		j--;
	}
	printf("%d, %d", sum1, sum2);
}

#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Discription: sum of multiples of 3 and 5
 * Return: 0 (success)
 */

int main(void)
{
	int sum, i = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}

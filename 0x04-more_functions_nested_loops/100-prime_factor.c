#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Discription: prime factorial
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j = 612852475143;

	for (i = 2; i < j; i++)
	{
		if (j % i == 0)
		{
			j = j / i;
		}
	}
	printf("%li\n", j);

	return (0);
}

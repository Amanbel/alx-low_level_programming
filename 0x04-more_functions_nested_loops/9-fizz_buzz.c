#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Discription: fizzbuzz
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			if (i != 99)
			{
				printf(" ");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

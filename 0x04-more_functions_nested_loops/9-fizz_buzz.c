#include <stdio.h>

/**
 * main - Entry Point
 * Discription: fizzbuzz
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) && (i % 5))
		{
			printf("Fizz Buzz ");
		}
		else if (i % 3)
		{
			printf("Fizz ");
		}
		else if (i % 5)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

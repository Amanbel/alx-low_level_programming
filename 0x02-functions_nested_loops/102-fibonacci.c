#include <stdio.h>

/**
 * main - Entry Point
 * Discription: fibonacci numbers
 * Return: 0 (Success)
 */

int main(void)
{
	long int f1 = 1;
	long int f2 = 1;
	long int nex;
	int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", f2);
		if (i != 50)
		{
			printf(", ");
		}
		nex = f1 + f2;

		f1 = f2;
		f2 = nex;
	}
	printf("\n");

	return (0);
}

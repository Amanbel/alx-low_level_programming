#include <stdio.h>

/**
 * main - Entry Point
 * Discription: fibonacci numbers
 * Return: Nothing
 */

int main(void)
{
	int f1 = 0;
	int f2 = 1;
	int i, nex;

	for (i = 1; i < 50; i++)
	{
		printf("%d, ", f2);

		nex = f1 + f2;

		f1 = f2;
		f2 = nex;
	}
}

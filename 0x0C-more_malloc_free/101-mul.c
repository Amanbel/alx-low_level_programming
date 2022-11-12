#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: elements of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	if (!mul)
	{
		printf("Error\n");
		exit(98);
	}

	print("%d\n", mul);

	return (0);
}

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

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: count of args
 * @argv: content of args
 * Return: 0 if Success, 1 if FAIL
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		return (0);
	}
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] > 'a' && argv[i][0] < 'z')
			{
				printf("Error\n");
				return (1);
			}
			if (argv[i][0] > 'A' && argv[i][0] < 'Z')
			{
				printf("Error\n");
				return (1);
			}
			if (atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
			}
		}
	printf("%d\n", sum);
	return (0);
}

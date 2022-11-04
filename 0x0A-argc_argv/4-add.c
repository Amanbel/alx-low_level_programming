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

	if (argc - 1 >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

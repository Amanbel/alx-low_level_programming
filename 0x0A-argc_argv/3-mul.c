#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: count of arg
 * @argv: content of arg
 * Return: 0 if Success, 1 if not
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
		printf("%s\n", "Error");
		return (1);
	}

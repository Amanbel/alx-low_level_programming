#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a basic calculator
 * @argc: the size of the argument vector
 * @argv: the argument vector
 * Description: calculates two numbers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (argv[2][1] !- '\0')
	{
		puts("Error");
		exit(99);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}

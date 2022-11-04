#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv: content of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

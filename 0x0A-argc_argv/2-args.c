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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

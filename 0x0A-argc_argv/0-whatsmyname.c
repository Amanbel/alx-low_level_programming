#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: count of argument
 * @argv: content of argument
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	char *n = argv[0];
	int j = strlen(n);

	for (i = 0; i < j; i++)
	{
		if (*(n + i) != '\0')
		{
			putchar(*(n + i));
		}
	}
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * main - Entry Point
 * Discription: print _putchar
 * Return: 0 (Success)
 */

int main(void)
{
	char w[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(w[i]);
	}
	_putchar('\n');

	return (0);
}

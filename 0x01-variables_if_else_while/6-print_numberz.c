#include<stdio.h>

/**
 * main - Entry Point
 * Description: print numbers with ascii
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	putchar(10);

	return (0);
}

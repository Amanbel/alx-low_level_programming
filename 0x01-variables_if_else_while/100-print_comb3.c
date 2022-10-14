#include<stdio.h>

/**
 * main - Entry Point
 * Discription: nested if statment and for loop
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (a < b)
			{
			putchar(a);
			putchar(b);
			if (a != 56 && b != 57)
			{
				putchar(44);
				putchar(32);
			}
			}
		}
	}

	putchar(10);

	return (0);
}

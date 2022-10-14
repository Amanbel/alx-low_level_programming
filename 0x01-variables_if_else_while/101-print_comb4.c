#include<stdio.h>

/**
 * main - Entry Point
 * Discription: nested if statment and for loop
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = 49; b <= 56; b++)
		{
			for (c = 50; c <= 57; c++)
			{
			if (a < b && b < c)
			{
			putchar(a);
			putchar(b);
			putchar(c);
			if (a != 55 || b != 56 || c != 57)
			{
				putchar(44);
				putchar(32);
			}
			}
			}
		}
	}

	putchar(10);

	return (0);
}

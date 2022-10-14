#include<stdio.h>

/**
 * main - Entry Point
 * Discription: hexadecimal notations
 * Return: 0 (Success)
 */

int main(void)
{
	int he, de;

	for (he = 48; he <= 57; he++)
	{
		putchar(he);

		if (he == 57)
		{
			for (de = 97; de <= 102; de++)
			{
				putchar(de);
			}
		}
	}

	putchar(10);

	return (0);
}

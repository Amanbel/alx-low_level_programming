#include<stdio.h>

/**
 * main - Entry Point
 * Description: nested for loop
 * Return: 0 (Success)
 */

int main(void)
{
	int alp, ch;

	for (alp = 48; alp <= 57; alp++)
	{
		putchar(alp);
		for (ch = 1; ch < 2; ch++)
		{
			if (alp != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	}

	putchar(10);
	return (0);
}

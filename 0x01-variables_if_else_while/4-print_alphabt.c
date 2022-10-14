#include<stdio.h>

/**
 * main - Entry Point
 * Description: print alphabets except some
 * Return: 0 (success)
 */

int main(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		if (alp != 101 && alp != 113)
		{
			putchar(alp);
		}
	}

	putchar(10);

	return (0);
}

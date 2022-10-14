#include<stdio.h>

/**
 * main - Entry Point
 * Description: print lower case alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		putchar(alp);
	}

	putchar(10);

	return (0);
}

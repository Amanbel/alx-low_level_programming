#include<stdio.h>

/**
 * main - Entry Point
 * Description: upper and lower case alphapets
 * Return: 0 (Success)
 */

int main(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		putchar(alp);
	}
	for (alp = 65; alp <= 90; alp++)
	{
		putchar(alp);
	}

	putchar(10);

	return (0);
}

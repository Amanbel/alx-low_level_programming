#include <stdio.h>

/**
 * before - Entry Point
 * Description: print before main
 */

void before(void) __attribute__((constructor));

void before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * main - Entry Point
 * Description: print to standard output
 * Return: 0
 */

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}

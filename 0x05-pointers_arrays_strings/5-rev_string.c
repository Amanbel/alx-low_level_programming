#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int mid = len / 2;
	char j;
	int i;

	for (i = 0; i < mid; i++)
	{
		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
}

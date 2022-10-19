#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry Point
 * Discription: checks letters
 * @c: letters to test
 * Return: Nothing
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

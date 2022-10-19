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
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

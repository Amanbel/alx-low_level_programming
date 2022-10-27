#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry Point
 * Discription: check upper case
 * @c: character to test
 * Return: Nothing
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

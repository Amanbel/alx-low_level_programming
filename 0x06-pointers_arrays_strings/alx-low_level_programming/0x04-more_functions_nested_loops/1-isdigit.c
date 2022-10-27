#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Entry Point
 * Discription: check if num is digit
 * @c: digit to be tested
 * Return: Nothing
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

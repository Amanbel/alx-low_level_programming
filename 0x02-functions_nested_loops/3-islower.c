#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry Point
 * Discription: check letter case
 * Return: Nothing
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

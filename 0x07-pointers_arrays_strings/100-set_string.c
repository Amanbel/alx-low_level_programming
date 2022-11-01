#include <stdio.h>
#include "main.h"

/**
 * set_string - sets a pointer to a string
 * @s: pointer
 * @to: string
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}

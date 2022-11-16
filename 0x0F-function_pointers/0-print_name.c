#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function prints name using pointer to function
 * @name: name output
 * @f: pointer function used
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an arrray with malloc
 * @size: size of array
 * @c: content of array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}

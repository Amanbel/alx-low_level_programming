#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of the memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}

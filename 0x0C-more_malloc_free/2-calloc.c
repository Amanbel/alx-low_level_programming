#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory like malloc
 * @nmemb: number of elements
 * @size: element size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);

	p = malloc(nmemb * size);

	if (!p)
		return (NULL);
	while (i < (nmemb * size))
		p[i++] = 0;
	return (p);
}

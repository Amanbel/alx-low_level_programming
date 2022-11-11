#include <stdlib.h>
#include "main.h"

/**
 * array_range - gives the range between two numbers
 * @min: lower boundary
 * @max: higher boundary
 * Return: 0;
 */

int *array_range(int min, int max)
{
	unsigned int i = 0;
	int *p;
	unsigned int m = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(m);
	if (!p)
		return (NULL);

	while (min <= max)
	{
		*(p + i) = min;
		i++;
		min++;
	}
	return (p);
}

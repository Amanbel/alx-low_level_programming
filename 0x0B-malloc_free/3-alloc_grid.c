#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate memory for 2d array
 * @width: size of width
 * @height: size of height
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc((width * height) * sizeof(int)) + 1;

	if (!p)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (*p);
}

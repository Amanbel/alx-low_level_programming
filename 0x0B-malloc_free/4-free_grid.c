#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free allocated space
 * @grid: array to free
 * @height: size of array
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!*grid)
		return;
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}

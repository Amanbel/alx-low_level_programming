#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches a value in an ordered list
 * using the jump algorithm
 * @array: array to search the value from
 * @size: size of the array
 * @value: value to be searched
 * Return: -1 if unsuccessful, value if successful
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = sqrt(size);

	if (!array)
		return (-1);

	while (array[start] < value && start < size)
	{
		printf("Value checked array[%u] = [%u]\n", start, array[start]);
		start += end;
	}
	end = start - end;
	printf("Value found between indexes [%u] and [%u]\n", end, start);
	start = start >= size ? size - 1 : start;
	while (end <= start)
	{
		printf("Value checked array[%u] = [%d]\n", end, array[end]);
		if (array[end] == value)
			return (end);
		end++;
	}
	return (-1);
}

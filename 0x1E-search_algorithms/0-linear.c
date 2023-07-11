#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches a value using the linear algorithm
 * Description: searches for a value
 * @array: list of values to search from
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: -1 if unsuccessful or the value its self if successful
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

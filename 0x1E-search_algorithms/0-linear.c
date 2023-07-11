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
	unsigned int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			int j = i;

			return (j);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}

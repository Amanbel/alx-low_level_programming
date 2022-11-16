#include "function_pointers.h"

/**
 * array_iterator - iterates trough an array
 * @array: array of ints
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

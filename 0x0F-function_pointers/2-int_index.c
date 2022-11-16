#include "function_pointers.h"

/**
 * int_index - compares two numbers
 * @array: array to compare from
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

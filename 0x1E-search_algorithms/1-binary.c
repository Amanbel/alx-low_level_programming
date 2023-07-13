#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search algorithm
 * @array: sorted array
 * @size: size of the array
 * @value: value to search for
 * Return: -1 if unsuccessful, the value its self if successful
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid = size / 2;
	int i;

	while (left <= right)
	{

		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}

	}
	return (-1);
}

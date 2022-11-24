#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints elements of list
 * @h: structure
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

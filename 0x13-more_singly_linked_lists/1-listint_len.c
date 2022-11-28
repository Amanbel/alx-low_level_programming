#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns num of linked list
 * @h: singly linked list
 * Return: unsigned int(size_t)
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print doubly linked list data
 * @h: doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

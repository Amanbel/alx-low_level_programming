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
	dlistint *ptr = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (ptr == NULL)
		return (NULL);

	ptr = h;

	if (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (0);
}

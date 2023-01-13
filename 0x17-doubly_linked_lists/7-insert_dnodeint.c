#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a position
 * @h: head of the dlist
 * @idx: index of the node
 * @n: data to be inserted
 * Return: address of new node if success, NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	ptr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}

	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));
	
	new->n = n;
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next->prev = new;
	ptr->next = new;

	return (new);
}

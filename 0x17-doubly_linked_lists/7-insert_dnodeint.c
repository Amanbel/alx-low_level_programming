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
	dlistint_t *ptr, *ptr_p, *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	new->prev = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	ptr = *h;
	i = 0;
	while (i < idx)
	{
		ptr = ptr->next;
		i++;
	}

	if (idx == 0)
		return (add_nodeint(h, n));

	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	ptr_p = ptr->prev;
	ptr->prev = new;
	if (ptr_p != NULL)
		ptr_p->next = new;
	new->next = ptr;
	new->prev = ptr_p;

	return (new);
}

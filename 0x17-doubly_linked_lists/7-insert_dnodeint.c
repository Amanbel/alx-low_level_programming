#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a position
 * @h: head of the dlist
 * @idx: index of the node
 * @n: data to be inserted
 * Return: address of new node if success, NULL if fail
 */

dlistint_t *insert_doubleint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *ptr_p, *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	new-prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	
	ptr = *head;
	i = 0;
	while (i < idx)
	{
		ptr = ptr->next;
		i++
	}

	ptr_p = ptr->prev;
	ptr->prev = new;
	if (ptr_p != NULL)
		ptr_p->next = new;
	new->next = ptr;
	new->prev = ptr_p;

	return (new);
}

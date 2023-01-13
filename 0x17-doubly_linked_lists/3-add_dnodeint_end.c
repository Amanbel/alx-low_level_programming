#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: first node of doubly linked list
 * @n: data inserted in the last node
 * Return: address of new element if success, NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr;
	return (NULL);
}

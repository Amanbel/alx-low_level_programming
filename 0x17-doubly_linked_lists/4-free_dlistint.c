#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: first node of doubly linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

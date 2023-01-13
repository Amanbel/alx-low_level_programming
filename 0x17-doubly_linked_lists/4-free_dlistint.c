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

	while (head->prev || head->next)
	{
		ptr = head;
		head = head->next;
		free(ptr);
		ptr = NULL;
		head->prev = NULL;
	}
	free(head);
	head = NULL;
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: first node of doubly linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head->prev || head->next)
	{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
	free(head);
	head = NULL;
}

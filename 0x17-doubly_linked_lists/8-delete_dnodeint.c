#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes at position
 * @head: first node of dlist
 * @index: position of node
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0 && *head != NULL)
	{
		*head = (*head)->next;
		if (*head == NULL)
			return (-1);
		free((*head)->prev);
		(*head)->prev = NULL;
		ptr = NULL;
		return (1);
	}

	while (index > 0)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
		index--;
	}
	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	free(ptr);
	ptr = NULL;
	return (1);
}

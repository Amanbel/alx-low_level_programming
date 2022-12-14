#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at specified index
 * @head: pointer to linked list
 * @index: index of the node to be deleted
 * Return: 1 (success) -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre = *head;
	listint_t *curr = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}
	else if (index == 1)
	{
		curr = (*head)->next;
		(*head)->next = curr->next;
		free(curr);
		return (1);
	}
	else
	{
		while (index != 0)
		{
			if (curr->next == NULL)
				return (-1);
			pre = curr;
			curr = curr->next;
			index--;
		}
		pre->next = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}
}

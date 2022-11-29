#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: pointer to linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (head == NULL || *head == NULL)
		return;

	while (ptr != NULL)
	{
		listint_t *temp = ptr;

		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head of linked list
 * @head: pointer to linked list
 * Return: deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int i;

	if (ptr == NULL)
		return (0);

	*head = ptr->next;
	i = ptr->n;

	free(ptr);
	return (i);
}

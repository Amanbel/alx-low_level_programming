#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert-nodeint_at_index - inserts node at a specific position
 * @head: pointer to the linked list
 * @idx: index num to add the node in
 * @n: integer data to add
 * Return: pointer to the new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx,
		int n)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *newptr = malloc(sizeof(listint_t));

	if (newptr == NULL)
		return (NULL);

	newptr->n = n;
	newptr->next = NULL;

	i = 0;
	if (ptr != NULL)
	{
		idx--;
		while (i <= idx && ptr != NULL)
		{
			ptr = ptr->next;
			i++;
		}
		newptr->next = ptr->next;
		ptr->next = newptr;
	}
	else
	{
		ptr = newptr;
	}
	return (newptr);
}

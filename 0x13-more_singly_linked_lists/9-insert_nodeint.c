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
	unsigned int i = 0;
	listint_t *ptr, *newptr;

	if (head == NULL)
		return (NULL);

	newptr = malloc(sizeof(listint_t));

	if (newptr == NULL)
		return (NULL);
	newptr->n = n;
	ptr = *head;

	if (idx == 0)
	{
		newptr->next = *head;
		*head = newptr;
		return (*head);
	}
	idx--;
	while (ptr != NULL)
	{
		if (i == idx)
		{
			newptr->next = ptr->next;
			ptr->next = newptr;
		}
		i++;
		ptr = ptr->next;
	}
	if (idx > i)
		return (NULL);
	return (newptr);
}

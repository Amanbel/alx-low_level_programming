#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gives linked list at index
 * @head: head of linked list
 * @index: index to return
 * Return: linked list at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i <= index && head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}

#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at nth index
 * @head: first node of the dlist
 * Return: nth node if success, NULL if fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	ptr = head;

	if (index == 0)
		return (ptr);
	i = 0;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

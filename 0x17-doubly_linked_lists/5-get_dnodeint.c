#include <stdlib.h>
#include "main.h"

/**
 * get_dnodeint_at_index - gets node at nth index
 * @head: first node of the dlist
 * Return: nth node if success, NULL if fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (i <= index)
	{
		ptr = head->next;
		i++;
	}
	return (ptr);
}

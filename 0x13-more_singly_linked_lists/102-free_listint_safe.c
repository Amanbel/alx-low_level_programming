#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees list
 * @h: pointer to linked list
 * Return: num of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = find_listint(*h);
	for (len = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}

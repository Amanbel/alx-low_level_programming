#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees allocated lists
 * @head: linked list head
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

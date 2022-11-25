#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees allocated lists
 * @head: linked list head
 * Return: Nothing
 */

void free_list(list_t *head)
{
	while (head->link != NULL)
	{
		free(head->str);
		free(head->len);
		head = head->link;
	}
}

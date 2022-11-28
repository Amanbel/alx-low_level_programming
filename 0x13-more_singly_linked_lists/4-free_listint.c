#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free singly linked list
 * @head: head of singly linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

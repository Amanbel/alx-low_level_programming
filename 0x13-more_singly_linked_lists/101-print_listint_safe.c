#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints nodes of linked list with addresses
 * @head: pointer to linked list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	if (head == NULL)
		exit (98);

	while (ptr != NULL)
	{
		printf("[%p] %d\n", ptr, ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}

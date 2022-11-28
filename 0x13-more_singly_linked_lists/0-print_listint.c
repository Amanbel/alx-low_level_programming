#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print integer from linked list
 * @h: singly linked list
 * Return: unsigned int(size_t)
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

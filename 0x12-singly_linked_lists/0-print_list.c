#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of list
 * @h: structure
 * Return: num of elements
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

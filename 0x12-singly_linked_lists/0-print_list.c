#include <stdio.h>

/**
 * print_list - prints elements of list
 * @h: structure
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 2;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	return (i);
}

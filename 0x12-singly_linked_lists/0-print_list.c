#include <stdio.h>

/**
 * print_list - prints elements of list
 * @h: structure
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *ptr = NULL;
	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}

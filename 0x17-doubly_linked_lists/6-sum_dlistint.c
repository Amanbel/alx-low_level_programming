#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the int in dlist
 * @head: the first node of the dlist'
 * Return: the sum of int in dlist
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum)
}

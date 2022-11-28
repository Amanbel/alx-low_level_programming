#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - adds all the integer data in linked list
 * @head: pointer to head of linked list
 * Return: 0 if head NULL or (sum)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

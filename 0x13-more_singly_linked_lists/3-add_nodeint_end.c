#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 * @head: pointer to the head link
 * @n: integer to add
 * Return: pointer to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}
	else
		*head = ptr;

	return (ptr);
}

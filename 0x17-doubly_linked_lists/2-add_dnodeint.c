#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to the beginning of a double linked list
 * @head: head of the double linked list
 * @n: data inserted in the new first node
 * Return: address if success, NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = *head;
	*head->prev = ptr;
	*head = ptr;

	return (ptr);
}

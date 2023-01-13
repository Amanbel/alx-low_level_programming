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
	dlistint_t *new;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}

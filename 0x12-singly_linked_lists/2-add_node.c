#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node
 * @head: pointer to pointer of linked list
 * @str: string to add
 * Return: address of element
 */

list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	while (str[count] != '\0')
		count++;

	temp->len = count;

	temp->next = *head;

	*head = temp;

	return (temp);
}

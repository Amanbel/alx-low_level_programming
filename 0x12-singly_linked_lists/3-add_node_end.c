#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds element at the end of a linked list
 * @head: pointer to the head
 * @str: string data to add
 * Return: pointer to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr, *temp;
	ptr = *head;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);

	while (str[i] != '\0')
		i++;
	temp->len = i;
	temp->next = NULL;
	while (ptr->link != NULL)
		ptr = ptr->link;
	ptr->link = temp;
	return (temp);
}

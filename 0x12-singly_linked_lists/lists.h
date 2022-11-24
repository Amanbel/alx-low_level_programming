#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_i - singly linked list
 * @str: string data
 * @len: integer data
 * @next: pointer to next link
 */

typedef struct link_s
{
	char *str;
	unsigned int len;
	struct link_func *next;
} lint_t;

int _putchar(int c);
size_t print_list(const list_t *h);
#endif

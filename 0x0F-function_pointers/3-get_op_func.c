#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - select the correct function
 * @s: operation
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	int = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (s && ops[i].op != NULL)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		++i;
	}

	return (NULL);
}

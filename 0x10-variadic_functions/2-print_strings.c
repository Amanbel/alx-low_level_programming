#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings to display
 * @separator: character put after each consucative string
 * @n: number of variables
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;


	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		if (i == (n - 1))
			printf("\n");
	}
	va_end(args);
}

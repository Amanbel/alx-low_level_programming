#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print any input to display
 * @format: input to function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i;
	int len = strlen(format);

	va_list args;

	va_start(args, format);

	i = 0;

	while (i < len)
	{
		if (format[i] == 'c')
		{
			char x = va_arg(args, char);
			printf("%c", x);
		}
		else if (format[i] == 'i')
		{
			int x = va_arg(args, int);
			printf("%d", x);
		}
		else if (format[i] == 'f')
		{
			double x = va_arg(args, double);
			printf("%f", x);
		}
		else if (format[i] == 's')
		{
			char *x = va_arg(args, char *);

			if (x == NULL)
			{
				printf("%p", (void *) x);
				str++;
				i++;
				continue;
			}
			printf("%s", x);
		}
		while (i != (len - 1))
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

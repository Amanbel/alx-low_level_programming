#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_all - print any input to display
 * @format: input to function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str = format;
	int len = strlen(format);

	va_list args;

	va_start(args, format);

	i = 0;

	while (*str)
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
		str++;
		i++;
	}
	printf("\n");
}

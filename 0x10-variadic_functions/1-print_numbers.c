#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers to display
 * @separator: character put after each consucative numbers
 * @n: number of variables
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	if (separator == NULL || *separator == 0)
		str = "";
	else
		str = (char *) separator;
	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1))
			printf("%s", str);
		if (i == (n - 1))
			printf("\n");
	}
	va_end(args);
}

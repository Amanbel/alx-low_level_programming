#include <stdio.h>
#include <string.h>
#include "main.h"

/** puts2 - prints the even index of a string
 * @str:the string
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;
	int j = strlen(str);

	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar(10);
}

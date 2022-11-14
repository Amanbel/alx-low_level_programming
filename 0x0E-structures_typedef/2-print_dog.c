#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog info
 * @d: struct data type
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("(nil)\n");
		}
		if (d->age)
		{
			printf("Name: %f\n", d->age);
		}
		else
		{
			printf("(nil)\n");
		}
		if (d->owner)
		{
			printf("Name: %s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}

}

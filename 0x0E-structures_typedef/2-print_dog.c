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
			printf("Name: %s\n", d->name);
		else
			printf("Name: %p\n", (void *)d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %p\n", (void *)d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %p\n", (void *)d->owner);
	}
}

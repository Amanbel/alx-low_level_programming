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
		d->name ? printf("Name: %s\n", d->name) : printf("(nil)\n");
		d->age ? printf("Age: %f\n", d->age) : printf("(nil)\n");
		d->owner ? printf("Owner: %s\n", d->owner) : printf("(nil)\n");
	}
}

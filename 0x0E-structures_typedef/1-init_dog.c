#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function for defining data
 * @d: data type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Nohting
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Entry Point
 * @name: name of pet
 * @age: age of pet
 * @owner: owner of pet
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *adog;

	adog = malloc(sizeof(dog_t));

	if (adog == NULL)
		return (NULL);
	adog->name = name;
	adog->age = age;
	adog->owner = owner;

	return (adog);
}

/**
 * free_dog - frees allocated mem
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}

#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Entry Point
 * @name: name of pet
 * @age: age of pet
 * @owner: owner of pet
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *adog;

	adog = malloc(sizeof(struct dog));

	if (user == NULL)
		return (NULL);
	adog->name = name;
	adog->age = age;
	adog->owner = owner;

	return (adog);
}

#include <stdio.h>
#include <stdlib.h>
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
	if (name == NULL)
	{
		free(adog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(adog);
		free(name);
		return (NULL);
	}
	adog->name = name;
	adog->age = age;
	adog->owner = owner;

	return (adog);
}

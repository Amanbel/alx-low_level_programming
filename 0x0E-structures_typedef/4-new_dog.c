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
	char *dest;
	char *dest2;

	adog = malloc(sizeof(dog_t));

	if (adog == NULL)
		return (NULL);
	strcpy(dest, adog->name);

	if (name == NULL)
	{
		free(adog);
		return (NULL);
	}
	adog->name = dest;
	strcpy(dest2, adog->owner);

	if (owner == NULL)
	{
		free(adog);
		return (NULL);
	}
	adog->age = age;
	adog->owner = dest2;

	return (adog);
}

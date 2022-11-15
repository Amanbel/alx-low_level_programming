#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * dup_str - copy string
 * @s: string
 * Return: pointer to string
 */

char *dup_str(char *s)
{
	int len, i;
	char *cpy;

	len = strlen(s);

	cpy = malloc(sizeof(char) * (len + 1));

	if (!cpy)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		*(cpy + i) = *(s + i);
	}
	return (cpy);
}

/**
 * new_dog - Entry Point
 * @name: name of pet
 * @age: age of pet
 * @owner: owner of pet
 * Return: pointer to the struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *adog;
	char *cstr1, *cstr2;

	adog = malloc(sizeof(dog_t));

	if (adog == NULL)
		return (NULL);
	adog->age = age;

	cstr1 = dup_str(name);
	if (cstr1 == NULL)
	{
		free_dog(adog);
		return (NULL);
	}
	adog->name = cstr1;

	cstr2 = dup_str(owner);
	if (cstr2 == NULL)
	{
		free_dog(adog);
		return (NULL);
	}

	adog->owner = cstr2;

	return (adog);
}

/**
 * free_dog - frees allocated mem
 * @d: pointer to struct
 * Return: Nothing
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

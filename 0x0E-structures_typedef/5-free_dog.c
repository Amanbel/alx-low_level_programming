#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the mem alocated
 * @d: the struct data type
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		free(d->age);

		if (d->owner != NULL)
			free(d->owner);
	}
}

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
		free(d->name);
		free(d->owner);
		free(d);
	}
}

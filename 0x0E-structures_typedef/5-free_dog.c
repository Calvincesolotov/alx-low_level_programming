#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fn frees dogs
 * @d: points to dogs to be freed
 *
 * Return: returns null
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

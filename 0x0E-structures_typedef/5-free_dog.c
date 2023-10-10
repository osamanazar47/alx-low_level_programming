#include "dog.h"
#include <stdlib.h>
/**
 * free_dogs - frees the dogs
 * @d: the pointer to the dogs
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

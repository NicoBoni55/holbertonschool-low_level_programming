#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free dog
 * @d: The dog to be free.
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  function that frees dogs.
 *@d : variable to free the dog
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

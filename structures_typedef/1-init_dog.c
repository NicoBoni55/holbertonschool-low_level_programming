#include <stdio.h>
#include "dog.h"
/**
 *init_dog - define a new type of structure
 *@d : this is the structure
 *@name : define the name
 *@age : define the age
 *@owner : define the owner
 *
 *return : 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}

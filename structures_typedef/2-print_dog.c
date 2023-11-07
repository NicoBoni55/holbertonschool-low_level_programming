#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function that print
 *@d : this is the structure
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: ");
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("nil\n");
		}
		printf("Age: ");
			if (d->age < 0)
			{
				printf("nil\n");
			}
			else
			{
				printf("%f\n", d->age);
			}
			printf("Owner: ");
				if (d->owner != NULL)
				{
					printf("%s\n", d->owner);
				}
				else
				{
					printf("nil\n");
				}
}

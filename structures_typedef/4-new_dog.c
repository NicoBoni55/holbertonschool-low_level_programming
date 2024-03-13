#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}

/**
 * _strcpy - function that copies a string
 * @src : string
 * @dest : dest
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}

	max = malloc(sizeof(dog_t));

	if (max == NULL)
	{
		return (NULL);
	}

	max->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (max->name == NULL)
	{
		free(max);
		return (NULL);
	}

	max->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (max->owner == NULL)
	{
		free(max->owner);
		free(max);
		return (NULL);
	}

	max->name = _strcpy(max->name, name);
	max->owner = _strcpy(max->owner, owner);
	max->age = age;

	return (max);
}

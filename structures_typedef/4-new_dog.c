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
	int f;

	for (f = 0; *s != '\0'; s++)
	{
		f++;
	}
	return (f);
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
	max->name = malloc(sizeof(char) * (_strlen(name) + 1));
	max->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	max->name = _strcpy(max->name, name);
	max->owner = _strcpy(max->owner, owner);
	max->age = age;

	return (max);
}

#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string
 * @s : return the lenght
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int length = 0;

	for (s != NULL; s++) 
	{
	length++;
	}
	return (length);
}

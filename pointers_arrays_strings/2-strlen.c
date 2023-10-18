#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string
 * @s : return the lenght
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{

	int length = 0;
	while (*(s + length) != NULL)
	{
	length++;
	}
	return (length);
}

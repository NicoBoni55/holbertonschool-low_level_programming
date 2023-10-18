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
	int counter
	
	counter = 0;
	while (s + counter != NULL)
	{
	counter++;
	}
	return (counter);
}

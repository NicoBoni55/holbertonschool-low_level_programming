#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - print function that creates an array of chars.
 * @c : number of characters
 * @size: the size of the memory to print
 *
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		{
		return (NULL);
		}
	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

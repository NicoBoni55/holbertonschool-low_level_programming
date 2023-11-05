#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: contain the values
 * @max: contain the values
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	ptr = (int *) malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}

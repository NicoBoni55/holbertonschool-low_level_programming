#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *@b : parameter to malloc
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *) malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator - given as a parameter on each element of an array
  * @array: array
  * @size: size
  * @action: pointer
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && action != NULL && size > 0)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}

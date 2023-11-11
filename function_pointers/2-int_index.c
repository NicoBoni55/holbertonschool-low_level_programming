#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array : array of function
 * @size : size of function
 * @cmp : pointer to the function
 *
 *
 * Return: if size or no elements matcher , return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (- 1);
	}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			else
			{
				return (- 1);
			}
		}
		return (- 1);
}

#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: the array
 * @size : size of function
 * @action :  pointer to the function
 *
 * Return: the sum
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
/**
 * print_square - function that print the square
 * @num: variable whit the number
 *
 * return: 0
 */
void print_square(int num)
{
printf("%d", num * num);
}

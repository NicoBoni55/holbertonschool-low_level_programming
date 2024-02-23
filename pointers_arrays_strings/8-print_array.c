#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 * @a : string
 * @n : number of elements
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n - 1; b++)
	{
		printf("%d, ", a[b]);
	}
	printf("%d\n", a[n - 1]);
}

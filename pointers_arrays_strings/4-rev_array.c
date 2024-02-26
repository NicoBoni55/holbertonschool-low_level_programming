#include "main.h"
/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int f;
	int i = 0;

	while (i < n / 2)
	{
		f = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = f;
		i++;
	}
}

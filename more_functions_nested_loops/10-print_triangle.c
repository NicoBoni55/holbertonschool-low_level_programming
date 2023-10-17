#include "main.h"
#include <stdio.h>
/**
 *print_triangle - function that draws a triangle
 *@size: draw triangle
 *
 * Return:0
 */
void print_triangle(int size)
{
	int i, j, k;
	if (size <= 0

	_putchar('\n');

	else

	for (i = 1; i <= size; i++)
	for (j = 1; j <= size; j++)
	_putchar(' ');

	for (k = 1; k <= i; k++)
	{
	_putchar('#');
	}
	_putchar('\n');
}

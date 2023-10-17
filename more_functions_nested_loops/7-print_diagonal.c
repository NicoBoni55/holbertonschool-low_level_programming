#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - function that draws a diagonal line on the terminal
 *@n: draw diagonal line
 *
 * Return:0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i <= n; i++)
	{
	for (j = 1; j <= i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}

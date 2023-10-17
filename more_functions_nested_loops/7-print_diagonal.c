#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - function that draws a diagonal line on the terminal
 *@i: draw diagonal line
 *@j: draw line
 *
 * Return:0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	else
	{
	for (i = 1; i <= n; i++)
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
}

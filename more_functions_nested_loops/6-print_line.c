#include "main.h"
/**
 * print_line - draws a straight line
 * @n : number of times
 *
 * Return: 0
 */
void print_line(int n)
{
	char c;

	if (n > 0)
	{
		for (c = n; c > 0; c--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}

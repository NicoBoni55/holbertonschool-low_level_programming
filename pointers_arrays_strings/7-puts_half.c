#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string
 * @str: variable to print half
 *
 *  Return: 0
 */
void puts_half(char *str)
{
	int length, y, start;
	int x = 0;

	while (*(str + x) != '\0')
	x++;

	length = x;
	if (length % 2 == 0)
	{
	start = length / 2;
	}

	else
	{
	start = (length - 1) / 2;
	}
	y = length - start;

	while (*(str + y) != '\0')
	{
	_putchar(*(str + y));
	y++;
	}

	_putchar('\n');
}

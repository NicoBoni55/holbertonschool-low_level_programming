#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: variable to character
 *  Return: 0
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
	_putchar(str[x]);
	x += 2;
	}
	_putchar('\n');
}

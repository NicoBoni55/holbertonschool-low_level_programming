#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: variable to character
 *  Return: 0
 */
void puts2(char *str)
{
	int x = 0, len = 0;

	while (str[x++])
	len++;

	for (x = 0; x < len; x += 2)
	_putchar(str[x]);

	_putchar('\n');
}

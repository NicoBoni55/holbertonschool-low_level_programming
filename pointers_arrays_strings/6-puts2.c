#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str : string
 *
 * Return: 0
 */
void puts2(char *str)
{
	if ((*str % 2) == 0)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}

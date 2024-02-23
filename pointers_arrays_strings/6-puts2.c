#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str : string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	int b = 0;

		while (str[b] != '\0')
		{
			b++;
		}
		for (i = 0; i < b; i += 2)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}

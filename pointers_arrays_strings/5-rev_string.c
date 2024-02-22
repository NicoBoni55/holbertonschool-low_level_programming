#include "main.h"
/**
 * rev_string - reverses a string
 * @s : string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

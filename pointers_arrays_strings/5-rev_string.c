#include "main.h"
/**
 * rev_string - reverses a string
 * @s : string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int f, m;
	int b;

	for(f = 0; *s != '\0'; s++)
	{
		f++;
	}
	m = f / 2;
	for (b = 0; b < m; b++)
	{
		_putchar(s[f]);
	}
	_putchar('\n');
}

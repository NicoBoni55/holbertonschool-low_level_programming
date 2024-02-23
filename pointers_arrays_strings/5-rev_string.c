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
	int b = 0;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	while (b < a)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		b++;
		a--;
	}
}

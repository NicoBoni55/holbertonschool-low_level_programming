#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: s or NULL if character not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (c == s[j])
			{
				s += j;
				return (s);
			}
		}
	}
	return ('\0');
}

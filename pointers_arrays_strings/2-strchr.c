#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		return (s);

		if (*s == 0)
		return ('\0');
	}
	return ('\0');
}

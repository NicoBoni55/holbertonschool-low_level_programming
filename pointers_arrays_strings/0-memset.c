#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - function that fills memory with a constant byte
 * @b: variable whit value to be filled
 * @s: variable address of memory to be filled
 * @n: variable unsigned
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

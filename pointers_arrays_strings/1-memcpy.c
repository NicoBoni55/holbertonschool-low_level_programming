#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: variable to dest
 * @src: variable to search
 * @n: variable unsigned
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *original_dest = dest;
	char const *original_src = src;

	for (i = 0; i < n; i++)
	{
		*original_dest++ = *original_src++;
	}
	return (dest);
}

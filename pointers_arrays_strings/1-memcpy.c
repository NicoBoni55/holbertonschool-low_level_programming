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
	char original_dest;

	original_dest = dest;
	while (n--)
	{
		*dest++ = *src++;
		*dest++;
	}
	return (original_dest);
}

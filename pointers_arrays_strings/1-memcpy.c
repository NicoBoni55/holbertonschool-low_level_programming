#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @src: string
 * @dest: dest
 * @n : bytes from memory area
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}

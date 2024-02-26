#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest : dest
 * @src : string
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b++] = '\0';
	return (dest);
}

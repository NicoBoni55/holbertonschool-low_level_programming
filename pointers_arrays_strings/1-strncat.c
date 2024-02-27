#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest : dest
 * @src : src
 * @n : bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		b++;
		a++;
	}
	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[b++] = src[a];
	}
	return (dest);
}

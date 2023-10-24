#include "main.h"
#include <stdio.h>
/**
 * _strncpy  - function that copies a string
 *@dest : variable to destination
 *@src : variable to search
 *@n : varable n
 *
 * Return: 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int x = 0, src_len = 0;

	while (src[x++])
		src_len++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = src_len; x < n; x++)
		dest[x] = '\0';

	return (dest);
}

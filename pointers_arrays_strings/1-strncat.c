#include "main.h"
#include <stdio.h>
/**
 * _strncat - function that concatenates two strings whit n
 *@dest :string 1
 *@src : string 2
 *@n : string 3
 *
 * Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	src++;
	dest++;
	n--;
	}
	*dest = '\0';
	return (result);
}

#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 *@dest :string 1
 *@src : string 2
 *
 * Return: 0.
 */
char *_strcat(char *dest, char *src)
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

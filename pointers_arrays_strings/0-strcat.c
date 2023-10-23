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
	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	}
	*dest = '\0';
	return = result;
}

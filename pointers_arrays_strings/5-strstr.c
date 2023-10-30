#include "main.h"
#include <stdio.h>
/**
 * _strstr -  function that locates a substring
 *@haystack : substring
 *@needle : string
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}

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
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp - 1);
		haystack++;
	}
	return (0);
}

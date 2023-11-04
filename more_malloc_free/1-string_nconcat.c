#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  function that concatenates two strings
 *@s1 : string 1
 *@s2 : string 2
 *@n : number of bytes
 *
 * Return: if fail return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	i = n;

	if (i >= len2)
	{
		i = len2;
	}
	result = (char *)malloc(len1 + i + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, i);
	result[len1 + i] = '\0';
	return (result);
}

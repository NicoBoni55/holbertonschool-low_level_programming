#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 *@s1 : pointer number 1
 *@s2 : pointer number 2
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int a, b;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	a = strlen(s1);
	b = strlen(s2);

	result = (char *) malloc((a + b + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str : string which is a duplicate
 *
 * Return: NULL if str = NULL.
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{

	s = (char *) malloc((a + 1) * sizeof(char));
	}
	for (b = 0; b < a; b++)
	{
		s[b] = str[a];

		s[a + 1] = '\0';
	}
	return (s);
	if (str == NULL)
	{
		return (NULL);
	}
}

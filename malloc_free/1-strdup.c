#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str : string which is a duplicate
 *
 * Return: NULL if str = NULL.
 */
char *_strdup(char *str)
{
	char *s;
	size_t a;

	if (str == NULL)
	{
		return (NULL);
	}
	a = strlen(str);

	s = (char *) malloc((a + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}

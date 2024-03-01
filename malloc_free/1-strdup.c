#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: newly pointer
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
	{
		return(NULL);
	}
	else
	{
		dup = ((char *) malloc (size * sizeof(char)));
		for (i = 0; i < *str; i++)
		{
			dup[i] = str[i];
		}
		free(dup);
	}
	return (dup);
}

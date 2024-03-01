#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: newly pointer
 */
char *_strdup(char *str)
{
	char a;
	int i;

	if (str == NULL)
	{
		return(NULL);
	}
	else
	{
		str = malloc(sizeof(char *)); 
		for (i = 0; i < *str; i++)
		{
			a = str[i];
		}
		free(dup);
	}
	return (a);
}

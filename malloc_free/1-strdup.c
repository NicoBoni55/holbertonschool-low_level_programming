#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated
 * @str: string
 *
 * Return: newly pointer
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
		}
		p = malloc((sizeof(char) * i) + 1);
		if (p == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < i; j++)
		{
			p[j] = str[j];
		}
		return (p);
		free(p);
	}
	return (0);
}

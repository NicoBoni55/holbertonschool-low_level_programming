#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @c: character
 * @size: size
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = (char *) malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			if (p == NULL)
			{
				return (NULL);
			}
			else
			{
				p[i] = c;
			}
		}
		return (p);
		free(p);
	}
	return (0);
}

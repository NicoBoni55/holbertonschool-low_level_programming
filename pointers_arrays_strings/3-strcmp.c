#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' && s2[k] != '\0' && s1[k] == s2[k]; k++)
	{
	}
	return (s1[k] - s2[k]);

	if (s1[k] == '\0' && s2[k] == '\0')
	{
		return (0);
	}
	else if (s1[k] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
 * _strcmp - compares two strings
 * s1 : string 1
 * s2 : string 2
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;
	int n;

	for (i = 0; *s1 != '\0'; s1++)
	{
		i++;
	}
	for (j = 0; *s2 != '\0'; s2++)
	{
		j++;
	}
	for (; i < n; n++)
	{
	if ((s1[i]) = (s2[j]))
	{
		return (0);
	}
	else if ((s1[i]) < (s2[j]))
	{
		return (-n);
	}
	else if ((s1[i]) > (s2[j]))
	{
		return (n);
	}
	}
	return (0);
}

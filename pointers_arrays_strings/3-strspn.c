#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s : initial segments
 * @accept : destination
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
	if (accept[j] == '\0')
	break;
	}
	return (count);
}

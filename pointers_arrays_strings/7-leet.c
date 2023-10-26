#include "main.h"
#include <stdio.h>
/**
 *leet - function that encodes a string
 *@s : sting thar encodes
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, j;
	char min[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mayus[] = {'A', 'E', 'O', 'T', 'L' '\0'};
	char num[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = '0'; j < 5; j++)
	{
		if (s[i] == min[j] || s[i] == mayus[j])
		{
			s[i] = num[j];
		}
	}
	}
	return (s);
}

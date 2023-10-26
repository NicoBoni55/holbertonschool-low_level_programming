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
	char *letter = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = '0'; j < 10; j++)
	{
		if (s[i] == letter[j])
		{
			s[i] = num[j];
		}
	}
	}
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalizes all words of a string.
 * @str : string to capitalizes
 *
 * Return: 0.
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	int string = strlen(str);
	int i;

	for (i = 0; i < string; i++)
	{
		if (isspace(str[i]))
		{
			capitalize = 1;
		}
		else if (capitalize)
		{
			str[i] = toupper(str[i]);
			capitalize = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	return (0);
}

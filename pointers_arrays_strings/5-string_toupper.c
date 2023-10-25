#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - function that changes all lowercase to uppercase
 * @str : variable to change
 *
 * Return: 0.
 */
char *string_toupper(char *str)
{
	char *string = str;

	while (*str)
	{
		if (islower(*str))
		{
			*str = toupper(*str);
		}
		str++;
	}
	return (string);
}

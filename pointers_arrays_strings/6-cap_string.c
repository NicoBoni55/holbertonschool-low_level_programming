#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s : string
 *
 * Return: 0
 */
char *cap_string(char *s)
{
	int a;
	int b = 0;
	
	for (a = 0; s[a] != '\0'; a++)
	{
		if (b && s[a] <= 'Z' && s[a] >= 'A')
		{
			s[a]= s[a] - 32;
			b = 0;
		}

	}
	return (s);
}

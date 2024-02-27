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
	int M = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[a] = s[a] - 32;
		}
		if (s[a] >= 'a' && s[a] <= 'z' && M)
		{
			s[a] = s[a] - 32;
			M = 0;
		}
		else
		{
			M = 0;
		}
		switch (s[a])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			M = 1;
			break;
		}
	}
	return (s);
}

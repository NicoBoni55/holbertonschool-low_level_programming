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
	int i;
	char leet_map[256];

	for (i = 0; i < 256; i++)
	{
		leet_map[i] = (char)i;
	}
	leet_map['A'] = leet_map['a'] = '4';
	leet_map['E'] = leet_map['e'] = '3';
	leet_map['O'] = leet_map['o'] = '0';
	leet_map['T'] = leet_map['t'] = '7';
	leet_map['L'] = leet_map['l'] = '1';

	for (i = '0'; s[i] != '\0'; i++)
	{
		s[i] = leet_map[(int)s[i]];
	}
	return (s);
}

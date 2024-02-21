#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int f;
	
	for (f = 0; *s != '\0'; s++)
	{
		f++;
	}
	return (f);
}

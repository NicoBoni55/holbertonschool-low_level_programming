#include "main.h"
/**
 * _strcat - check the code
 * @dest : dest
 * @src : string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int f = 0;
	int i = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		f++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{

		dest[f++] = src[i];
	}
	return (dest);
}

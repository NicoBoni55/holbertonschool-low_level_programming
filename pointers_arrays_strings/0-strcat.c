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
	size_t b;
	int l;
	int i;

	for (l = 0; *src != '\0'; src++)
	{
		l++;
	}
	while(src[i] != '\0')
	{
		i++;
	for (i = 0; i < b; i++)
	{

		dest[l + i] += src[i];
		dest[l + i] = '\0';
	}
	}
	return (dest);
}

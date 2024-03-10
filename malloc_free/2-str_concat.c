#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return: concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l1 = 0, l2 = 0;
	char *str1, *str2, *res;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[l1] != '\0')
	l1++;
	while (s2[l2] != '\0')
	l2++;
	str1 = malloc((sizeof(char) * l1 + 1));
	str2 = malloc((sizeof(char) * l2 + 1));
	for (i = 0; i < l1; i++)
	{
		str1[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		str2[j] = s2[j];
	}
	res = malloc((sizeof(char) * (l1 + l2 + 1)));
	if (res == NULL)
	{
		free(str1);
		free(str2);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		res[i] = str1[i];
	}
	for (j = 0; j < l2; j++)
	{
		res[l1 + j] = str2[j];
	}
	res[l1 + l2] = '\0';
	free(str1);
	free(str2);
	return (res);
}

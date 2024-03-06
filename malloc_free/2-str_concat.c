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
	int l1 = 0;
	int l2 = 0;
	int i, j, k;
	char *str1, *str2, *res;

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (s1 && s2 == 0)
	{
		return (NULL);
	}
	str1 = malloc((sizeof(char) * l1));
	str2 = malloc((sizeof(char) * l2));
	res = malloc ((sizeof(char) * (l1 + l2)));
	if (str1 && str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l1; i++)
		{
		}
		for (j = 0; j < l2; j++)
		{
		}
		for (k = 0; k < l1 + l2; k++)
		{
			res[k] = str1[i] + str2[j];
		}
		return (res);
		free (str1);
		free (str2);
		}
	return (0);
}

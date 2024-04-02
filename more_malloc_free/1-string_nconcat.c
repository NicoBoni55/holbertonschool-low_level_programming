#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @n : int
 * @s1 : string 1
 * @s2: string 2
 *
 * Return: pointer or if the function fails NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1, l2;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	l1 = 0;
	l2 = 0;

	while (s1[l1])
		l1++;

	while (s2[l2])
		l2++;

	str = malloc((sizeof(char) * l1 + n + 1));

	if (!str)
		return (NULL);

	for (i = 0; i < l1; i++)
		str[i] = s1[i];

	for (; i < l1 + n; i++)
		str[i] = s2[i - l1];

	str[l1 + n] = '\0';
	return (str);
}




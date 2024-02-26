#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s : string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}

#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c : character to check
 *
 * Return: c is uppercase 1, in other case 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}

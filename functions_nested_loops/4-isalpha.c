#include "main.h"
#include <stdio.h>
/**
 * _isalpha -  checks for alphabetic character
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
		else if (c <= 'Z' && c >= 'A')
		{
			return (1);
		}
	return (0);
}

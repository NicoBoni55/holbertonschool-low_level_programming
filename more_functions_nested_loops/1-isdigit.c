#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c : variable
 *
 * Return: c is a digit return 1, in otherwise 0
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}

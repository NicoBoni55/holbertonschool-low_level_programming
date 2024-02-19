#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @n : integer
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (0);
}

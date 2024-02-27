#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x : x
 * @y : y
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int p;

	p = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	p = p * _pow_recursion(x, y - 1);
	return (p);
}

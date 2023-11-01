#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n : variable
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n, n / 2));
	}
}

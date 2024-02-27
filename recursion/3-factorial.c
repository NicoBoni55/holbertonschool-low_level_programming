#include "main.h"
/**
 * factorial - function that returns the factorial of a given number. 
 * @n : number
 *
 * Return: factorial of number
 */
 int factorial(int n)
{
	int x;

	x = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
		x = x * factorial(n - 1);
	return (x);
}

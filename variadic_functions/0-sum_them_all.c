#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n : int
 *
 * Return: sum of all parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, a;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		a += va_arg(args, int);

	va_end(args);
	return (a);
}

#include "main.h"
/**
 * is_prime - function that determines that a number is prime
 * @a : number 1
 * @b : number 2
 *
 * Return: 1 if it is prime and 0 if it is not
 */
int is_prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (is_prime(a, b + 1));
}
/**
 * is_prime_number - function that return a prime number
 * @n : number
 *
 * Return: 1 in the input integer is prime, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

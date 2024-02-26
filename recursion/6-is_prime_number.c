#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n : number
 *
 * Return: 1 of the imput is prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int a;

	if (n <= 1)
	{
		return (0);
	}
	for (a = 2; a <= n / 2; a++)
		if (n % a == 0)
		{
			return (0);
		}
	return (1);
}

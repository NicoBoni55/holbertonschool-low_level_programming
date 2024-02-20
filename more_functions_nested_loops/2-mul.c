#include "main.h"
/**
 * mul - multiplies two integers
 * @a : integer
 * @b : integer
 *
 * Return: 0;
 */
int mul(int a, int b)
{
	int w = a * b;
	int x = -a * -b;
	int y = a * -b;

	if (w == x)
	{
		return (w);
	}
	else
	{
		return (y);
	}
}

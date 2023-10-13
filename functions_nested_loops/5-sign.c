#include "main.h"
#include <stdio.h>
/**
 *print_sign - prints the sign of a number.
 *@n: this variable is to print the number
 *
 * Return:0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+1');
	return (1);
	}
	else if (n == 0)
	{
	putchar('0');
	return (0);
	}
	else
	{
	putchar('-1');
	return (-1);
	}
}

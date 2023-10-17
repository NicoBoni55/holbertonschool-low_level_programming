#include "main.h"
#include <stdio.h>
/**
 *more_numbers - prints 10 times the number from 0 to 14
 *
 * Return:0
 */
void more_numbers(void)
{
	int i, cont;

	for (cont = 0; cont <= 9; cont++)
	{
	for (i = '0'; i <= '14'; i++)
	{
	if (i > 9)
	_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}

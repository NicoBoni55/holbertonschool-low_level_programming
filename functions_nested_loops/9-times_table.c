#include "main.h"
/**
 * main - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */
void times_table(void)
{
	int f;

	for (f = 0; f <= 8; f++)
	{
		_putchar('0');
		_putchar(',');
	}
	_putchar('\n');
}

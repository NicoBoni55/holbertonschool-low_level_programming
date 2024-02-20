#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9, except 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;
	int b = '4';
	int c = '2';


	for (a = '0'; a <= '9'; a++)
	{
		if (a != b && a != c)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}

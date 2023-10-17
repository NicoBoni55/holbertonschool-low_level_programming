include "main.h"
/**
 *print_numbers - prints the number from 0 to 9
 *
 * Return:0
 */
void print_numbers(void)
{
	char digit = '0';
	while (digit <= '9')
	{
	_putchar(digit);
	_putchar('\n');
	digit++;
	}
}

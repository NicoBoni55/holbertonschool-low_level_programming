#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int h, m;
	char x = ':';

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(x);
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
		}
	}
}

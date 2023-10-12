#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *main - entry point
 *
 * Return: Always 0
 */

void _putchar(char c)
{
	write(1, &c, 1);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}

#include "main.h"
/**
 *print_alphabet x10 - Print the alphabet from a-z x10
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	for (int i = 0; i < 10; i++)
	{
	_putchar(letter);
	}
	_putchar('\n');
}

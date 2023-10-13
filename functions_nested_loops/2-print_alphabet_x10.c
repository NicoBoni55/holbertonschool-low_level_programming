#include "main.h"
/**
 *print_alphabet x10 - Print the alphabet from a-z 10 times
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (letter = 'a'; letter <= 'z'; letter++)
	for (i = 0; i < 10; i++)
	{
	_putchar(letter);
	}
	_putchar('\n');
}

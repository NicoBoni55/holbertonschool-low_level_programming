#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet,in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}

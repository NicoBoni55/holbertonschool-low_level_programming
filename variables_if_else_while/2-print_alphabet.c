#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 97;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

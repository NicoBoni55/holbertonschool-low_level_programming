#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 97;
	char r = 65;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	for (r = 65; r <= 90; r++)
	{
		putchar(r);
	}
	putchar('\n');

	return (0);
}

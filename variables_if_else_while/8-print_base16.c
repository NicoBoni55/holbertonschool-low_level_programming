#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char x, j;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}

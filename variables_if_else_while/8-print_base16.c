#include <stdio.h>
/**
 * main - prints all the numbers of base 16
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

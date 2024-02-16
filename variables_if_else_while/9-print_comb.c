#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b = 44;
	int c = 32;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(b);
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}

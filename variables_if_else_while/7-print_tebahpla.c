#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}

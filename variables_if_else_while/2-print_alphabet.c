#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * return : 0
 *
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

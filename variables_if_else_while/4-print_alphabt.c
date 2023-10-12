#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	if (alphabet != 'e' && alphabet != 'q')
	putchar('\n');
	return (0);
}

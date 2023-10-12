#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
for (char c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}
for (char c = 'A' ; c <= 'Z' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

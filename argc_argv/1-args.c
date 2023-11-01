#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argv: Pointer to array of pointers containing string
 * @argc: counts the number of parameters
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}

#include "main.h"
/**
 * main - prints number of arguments
 * @argc: number of arg
 * @argv: arrays of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	if (argc > 0 && argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

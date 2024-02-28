#include "main.h"
/**
 * main - prints its name, followed by a new line
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
		printf("%s\n", argv[0]);
	}
	return (0);
}

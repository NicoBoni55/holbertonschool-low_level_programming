#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of arg
 * @argv: arrays of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		res = i * j;
		printf("%d\n", res);
	}
	return (0);
}

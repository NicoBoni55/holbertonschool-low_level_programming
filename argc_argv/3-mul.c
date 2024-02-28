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
	int i = 1;
	int j = 2;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		i = atoi(argv[i]);
		i = atoi(argv[j]);
		res = i * j;
		printf("%d\n", res);
	}
	return (0);
}

#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: number of arg
 * @argv: arrays of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (strcmp(argv[i], "0") == 0)
			{
				sum += 0;
			}
			else
			{
				j = atoi(argv[i]);
				if (j == 0)
				{
					printf("Error\n");
					return (1);
				}
				sum += j;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

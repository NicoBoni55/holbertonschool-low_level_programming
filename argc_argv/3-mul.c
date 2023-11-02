#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication of two numbers
 *
 * @argc: Numbers of arguments
 * @argv: Pointer to the arguments
 * Return: if receives two arguments - 0
 *         if does not receives - 1
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}

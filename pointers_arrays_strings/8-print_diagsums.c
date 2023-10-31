#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a : variable
 *@size : size of variable
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, i, sum1, sum2;

	sum1 = sum2 = 0;
	num1 = 0;
	num2 = size - 1;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + num1);
		sum2 += *(a + i * size + num2);
		num1 += 1;
		num2 -= 1;
	}
	printf("%d, %d\n", sum1, sum2);
}

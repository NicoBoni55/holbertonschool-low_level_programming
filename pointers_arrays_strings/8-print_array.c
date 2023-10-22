#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 *@n: variable to print elements
 *@a: variable to print elements
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
if (n <= 0)
{
return;
}
for (int i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}

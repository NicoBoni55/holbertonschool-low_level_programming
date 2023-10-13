#include "main.h"
#include <stdio.h>
/**
 *times_table -  prints the 9 times table, starting with 0
 *@i: this variable is to multiplication
 *@j: this variable is to multiplication
 *
 *
 * Return:0
 */
void times_table(void)
{
	int i, j;
        int result = i * j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	printf("%d", result);
	if (j < 9)
	{
	if (result <= 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	}
	_putchar('\n'); 
	}
}

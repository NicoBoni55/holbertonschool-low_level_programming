#include "main.h"
#include <stdio.h>
/**
 *times_table -  prints the nine times table, starting with zero
 *@i: this variable is to multiplication
 *@j: this variable is to multiplication
 *
 *
 * Return:0
 */
void times_table(void)
{
	int i;
	int j;

 for (i = 0; i <= 9; i++)
        {
        for (j = 0; j <= 9; j++)
        {
        int result = i * j;
        printf("%d * int = int\t" , result);
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
        _putchar('\n');
        }
int main (void)
{
times_table();
return (0);
}
}
}

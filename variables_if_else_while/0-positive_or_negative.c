#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
srand(time(0));
int n = rand();
printf("The number is %d\n", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
printf("\n");
return (0);
}

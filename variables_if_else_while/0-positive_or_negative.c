#include <stdio.h>
#include <time.h>
/**
 *main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x; 

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	return (0);
}

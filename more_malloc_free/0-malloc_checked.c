#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b : int
 *
 * Return: pointer or it fails value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str != NULL)
		return (str);

	exit(98);
}

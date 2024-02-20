#include "main.h"
/**
 * add - adds two integers
 * @i : integer
 * @j : integer
 *
 * Return: result
 */
int add(int i, int j)
{
	int r = i + j;
	int v = j + i;

	if (r == v)
	{
		return (r);
	}
	return (0);
}

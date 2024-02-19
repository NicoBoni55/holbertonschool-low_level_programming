#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c : character
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return(1);
	}
	return(0);
}

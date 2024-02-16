#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c : character
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	for (c = 65 && 97; c <= 90 && 122; c++)
	{
		return(1);
	}
	return(0);
}

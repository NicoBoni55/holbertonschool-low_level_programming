#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if(c != ' ')
	{
		return(1);
	}
	else if (c == 'A-Z')
	{
		return (0);
	}
}

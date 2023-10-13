#include "main.h"
#include <ctype.h>
/**
 *_islower - checks for lowercase character.
 *@c: this variable is to return lowercase
 *
 * Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

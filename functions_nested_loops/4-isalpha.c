#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks for alphabetic character.
 *@c: this variable is to return alphabetic character
 *
 * Return:0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

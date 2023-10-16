#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *_isupper - checks for uppercase character.
 *@c: this variable is to return uppercase
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);
int main(void)
{
char c = 'C';

if (_isupper(c)) {
	printf("%c is an uppercase character.\n", c);
	else
	printf("%c is not an uppercase character.\n", c);
}	
int _isupper(int c) {	
	if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
}

#include "main.h"
/**
 * _puts -  prints a string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for(i = 0; *str != '\0'; i++)
	{	
		_putchar(str[i]);

			if(str[i] < '\0')
			{
				break;
			}
	}
	_putchar('\n');
}

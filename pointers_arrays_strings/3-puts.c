#include "main.h"
#include <stdio.h>
/**
 * _puts - Write a function that prints a string 
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
	str++;
	length++;
	_putchar(*str);
	}
	return (length);
	_putchar('\n');
}

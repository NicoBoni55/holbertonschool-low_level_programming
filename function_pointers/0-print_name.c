#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name : name
 * @f : pointer
 *
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

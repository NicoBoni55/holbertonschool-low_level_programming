#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string, in reverse
 *@s: variable to print a string
 *
 * Return: 0
 */
void rev_string(char *s)
{
int length = 0;
int temp;
int start;
int end;

	while (s[length] != '\0')
	{
	length++;
	}
	start = 0;
	end = length - 1;
	while (start < end)
	{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
}
}

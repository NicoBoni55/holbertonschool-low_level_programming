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

	while (s[length] != '\0')
	{
	length++;
	}
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
	char temp = s[start];

	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
}
}

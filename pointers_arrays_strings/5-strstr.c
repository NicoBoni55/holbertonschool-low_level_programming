#include "main.h"
#include <stdio.h>
/**
 * _strstr -  function that locates a substring
 *@haystack : substring
 *@needle : string
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *temp = haystack;
        char *n = needle;

        while (*n && *haystack == *n)
        {
            haystack++;
            n++;
        }

        if (*n == '\0')
            return temp;

        haystack = temp + 1;
    }

    return NULL;
}

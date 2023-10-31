#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function that prints the chessboard
 *@a : chessboard
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int black, white;

	black = white = 0;
	if (black < 8)
	{
		white = 0;
		while (white < 8)
		{
			_putchar(a[black][white]);
			white++;
		}
		_putchar('\0');
		black++;
	}
}

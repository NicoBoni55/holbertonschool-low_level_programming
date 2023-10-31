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

	for (black = 0; black < 8; black++)
	{
		for (white = 0; white < 8; white++)
		{
			printf("%c", a[black][white]);
		}
		printf('\0');
	}
}

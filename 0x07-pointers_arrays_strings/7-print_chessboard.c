#include "main.h"
#include <stdio.h>

/**
* print_chessboard - this function prints a chessboard
* @a: sie of row for the chessboard
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		putchar('\n');
	}
}

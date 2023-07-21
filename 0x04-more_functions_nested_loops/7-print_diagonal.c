#include "main.h"

/**
* print_diagonal - outputs line
* @n: number of lines
* Return: void
*/

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}

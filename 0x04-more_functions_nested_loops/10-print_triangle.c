#include "main.h"

/**
* print_triangle - outputs some symbols
* @size: num of symbol
* Return: void
*/

void print_triangle(int size)
{
	int i, j, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (sp = size - i; sp > 0; sp--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
* times_table - outputs table
* Return: void
*/

void times_table(void)
{
	int rows, cols, val;

	for (rows = 0; rows <= 9; rows++)
	{
		for (cols = 0; cols <= 9; cols++)
		{
			val = rows * cols;

			if (cols != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (val <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((val / 10) + '0');
			}
			_putchar((val % 10) + '0');
		}
		_putchar('\n');
	}
}

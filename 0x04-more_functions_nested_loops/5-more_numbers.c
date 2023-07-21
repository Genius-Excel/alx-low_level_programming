#include "main.h"

/**
* more_numbers - new num
* Return: void
*/

void more_numbers(void)
{
	int i, lines;

	for (lines = 0; lines < 10; lines++)
	{
		for(i = 0; i < 15; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

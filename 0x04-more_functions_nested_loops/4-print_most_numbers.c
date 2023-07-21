#include "main.h"

/**
* print_most_numbers - output num
* Return: void
*/

void print_most_numbers(void)
{
	int i;

	char c = '0';

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(c + i);
		}
	}
	_putchar('\n');
}

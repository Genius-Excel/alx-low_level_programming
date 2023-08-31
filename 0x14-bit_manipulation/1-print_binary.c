#include "main.h"

/**
* print_binary - this function converts an unsigned int to binary.
* @n: unsinged integer to be converted to binary.
* Return: void.
*/

void print_binary(unsigned long int n)
{
	unsigned long int obsvr;

	bool digit_is_1 = false;

	for (obsvr = 1UL << (sizeof(unsigned long int) * 8 - 1); obsvr; obsvr >>= 1)
	{
		if (n & obsvr)
		{
			digit_is_1 = true;

			_putchar('1');
		}
		else if (digit_is_1)
		{
			_putchar('0');
		}
	}

	if (digit_is_1 != true)
	{
		_putchar('0');
	}
}

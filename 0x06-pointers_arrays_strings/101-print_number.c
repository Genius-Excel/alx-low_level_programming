#include "main.h"

/**
* print_number - this function outputs number
* @n: number to be printed
* Return: void
*/

void print_number(int n)
{
	int divisor, number;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	divisor = 1;

	number = n;

	while (number > 9)
	{
		divisor *= 10;

		number /= 10;
	}
	while (divisor != 0)
	{
		int digit = n / divisor;

		_putchar(digit + '0');
		n %= divisor;

		divisor /= 10;
	}
}

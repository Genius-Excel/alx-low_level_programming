#include "main.h"

/**
* print_last_digit - outputs last num
* @n : number to check
* Return: 0, last digit value
*/

int print_last_digit(int n)
{
	int last_dig;

	if (n < 0)
	{
		n = -n;
	}
	last_dig = n % 10;

	_putchar('0' + last_dig);
	return (last_dig);
}

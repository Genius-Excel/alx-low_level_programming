#include "main.h"

/**
* get_bit - this function returns the inddex in a bit
* @n: unsigned integer
* @index: index of the bit to be returned.
* Return: index of the bit if it exists.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

#include "main.h"

/**
* set_bit - this funtion sets a value to the index.
* @n: integer.
* @index: index location.
* Return: value at index.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL <<  index);
	return (1);
}

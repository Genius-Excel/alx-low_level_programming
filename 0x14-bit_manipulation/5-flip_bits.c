#include "main.h"

/**
 * flip_bits - flips bit.
 * @n: integer
 * @m: integer xor
 * Return: unsigned
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	unsigned int counter = 0;

	while (xor_result)
	{
		counter += xor_result & 1;
		xor_result >>= 1;
	}

	return (counter);
}

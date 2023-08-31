#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return:0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int number = 1;
	unsigned char *bit_ptr = (unsigned char *)&number;

	return (*bit_ptr == 1);
}

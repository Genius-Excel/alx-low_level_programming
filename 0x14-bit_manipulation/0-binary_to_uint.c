#include "main.h"

/**
* binary_to_uint - this function converts a binary to an
* unsigned value in decimal.
* @b: binary character array.
* Return: value of the decimal converted from binary.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;

	int bin_idx;

	if (b == NULL)
	{
		return (0);
	}


	for (bin_idx = 0; b[bin_idx] != '\0'; bin_idx++)
	{

		if (b[bin_idx] == '1' || b[bin_idx] == '0')
		{
			decimal_val = decimal_val << 1;

			decimal_val |= (b[bin_idx] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (decimal_val);
}

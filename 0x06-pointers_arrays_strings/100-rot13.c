#include "main.h"
#include <ctype.h>

/**
* rot13 - this function encodes a string
* @str: string to be encoded
* Return: string encoded
*/

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char b = *ptr;

		if (islower(b))
		{
			*ptr = 'a' + (b - 'a' + 13) % 26;
		}
		else if (isupper(b))
		{
			*ptr = 'A' + (b - 'A' + 13) % 26;
		}
		ptr++;
	}
	return (str);
}

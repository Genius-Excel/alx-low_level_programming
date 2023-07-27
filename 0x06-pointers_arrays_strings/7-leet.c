#include "main.h"

/**
* leet - encodes string to numbers
* @ptr: character to be transformed
* Return: ptr to the encoded value
*/

char *leet(char *ptr)
{
	char *ltr = ptr;

	while (*ltr != '\0')
	{
		char c = *ltr;

		if (c >= 'a' && c <= 'z')
		{
			if (c == 'a')
			{
				*ltr = '4';
			}
			else if (c == 'e')
			{
				*ltr = '3';
			}
			else if (c == 'o')
			{
				*ltr = '0';
			}
			else if (c == 't')
			{
				*ltr = '7';
			}
			else if (c == 'l')
			{
				*ltr = '1';
			}
		}
		else if (c >= 'A' && c <= 'Z')
		{
			if (c == 'A')
			{
				*ltr = '4';
			}
			else if (c == 'E')
			{
				*ltr = '3';
			}
			else if (c == 'O')
			{
				*ltr = '0';
			}
			else if (c == 'T')
			{
				*ltr = '7';
			}
			else if (c == 'L')
			{
				*ltr = '1';
			}
		}
		ltr++;
	}
	return (ptr);
}

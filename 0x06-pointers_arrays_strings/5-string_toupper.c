#include "main.h"

/**
* string_toupper - converts lower case to uppercase
* @ltr: pointer address
* Return: uppercase
*/

char *string_toupper(char *ptr)
{
	char *ltr = ptr;

	while (*ltr != '\0')
	{
		if (*ltr >= 'a' && *ltr <= 'z')
		{
			*ltr = *ltr - 32;
		}
		ltr++;
	}
	return (ptr);
}

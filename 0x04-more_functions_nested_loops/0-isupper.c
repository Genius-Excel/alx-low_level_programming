#include "main.h"

/**
* _isupper - checks for uppercase
* @c: value to be checked
* Return: 0 if upper, 1 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

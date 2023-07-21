#include "main.h"

/**
* _isdigit - checks for num
* @c : num to be checked
* Return: 0 if !num, 1 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

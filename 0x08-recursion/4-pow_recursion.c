#include "main.h"

/**
* _pow_recursion - this function return the power of two
* numbers passed as an argument inside the function
* @x: number to be raised
* @y: value of power
* Return: the value of the number rasied to it's power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}

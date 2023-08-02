#include "main.h"

/**
* sqrt_function - this is the helper square root funtion
* @n: number to check it's square root
* @start: start index
* @end: end index
* Return: the square root of the number
*/

int sqrt_function(int n, int start, int end)
{
	int mid, square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;

	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (sqrt_function(n, start, mid - 1));
	}
	else
	{
		return (sqrt_function(n, mid + 1, end));
	}
}

/**
* _sqrt_recursion - this function calculates the natural
* square root of a number
* @n: number to check it's square root
* Return: square root of the number 'n'
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_function(n, 0, n));
}

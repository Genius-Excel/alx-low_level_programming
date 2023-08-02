#include "main.h"

/**
* factorial - this function calculates the factorial of
* a number using the recursive function
* @n: number to be factored
* Return: factoril of the number n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

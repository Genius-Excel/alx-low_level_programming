#include "main.h"

/**
* prime_recursion - this function checks if a number is prime or not
* @n: number to be checked
* @i: divisor of the number n
* Return: output the prime number if it exist
*/

int prime_recursion(int n, int i)
{
	if (n <= 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (prime_recursion(n, i - 1));
}

/**
* is_prime_number - this function checks for a prime
* @n: number to be checked
* Return: the value of the number if prime exist
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_recursion(n, n - 1));
}

#include <stdio.h>

/**
* largest_factor - output largest prime
* @n: number to check
* Return: great_prime
*/

long int largest_factor(int n)
{
	long int great_prime = -1;

	long int i;

	while (n % 2 == 0)
	{
		great_prime = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			great_prime = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		great_prime = n;
	}
	return (great_prime);
}

/**
* main-this calculates largest prime
* Return: 0 always
*/

int main(void)
{
	long int num;

	long int res;

	num = 612852475143;

	res = largest_factor(num);

	printf("number:%ld ,largest factor:%ld\n", num, res);
	return (0);
}

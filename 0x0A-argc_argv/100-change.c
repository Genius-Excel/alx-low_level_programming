#include <stdio.h>
#include <stdlib.h>

/**
* change_coins - this function prints the minimum
* amout of coins to change money
* @amount: amount of money to change
* Return: the value of minimun amount
*/

int change_coins(int amount)
{
	int coin, coin_change;

	int i;

	int coin_arr[] = {25, 10, 5, 2, 1};

	coin = sizeof(coin_arr) / sizeof(coin_arr[0]);

	coin_change = 0;

	for (i = 0; i < coin; i++)
	{
		coin_change += amount / coin_arr[i];

		amount %= coin_arr[i];
	}
	return (coin_change);
}

/**
* main - this is the main function
* @argc: command line argument count
* @argv: command line argument vector array
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = change_coins(atoi(argv[1]));

	printf("%d\n", cent);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main function
 * Reurn: 0 (success)
 */

int main(void)
{
	int pass_length;

	void gen_password(int len);

	pass_length = 8;

	srand((unsigned int)time(NULL));

	gen_password(pass_length);
	return (0);
}

/**
 * random_string - generates a random char from an array
 * Return: char value
 */

char random_string()
{
	char varstr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int varstr_size = sizeof(varstr - 1);
	return (varstr[rand() % varstr_size]);
}

/**
 * gen_password - this function generates a password
 * @len: length of the password
 * Return: void
 */

void gen_password(int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%c", random_string());
	}
	printf("\n");
}

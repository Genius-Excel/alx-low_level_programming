#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
* valid_number - this function checks if a character is
* a valid digit
* @str: character array
* Return: 0 for success 1 otherwise
*/

int valid_number(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!(isdigit(str[i])))
		{
			return (0);
		}
	}

	return (1);
}

/**
* mul - this function multiplies numbers
* @num1: first number to be multiplied
* @num2: second number to be multiplied
* Return: result of the multiplied numbers
*/

char *mul(char *num1, char *num2)
{
	int i, j, len1, len2, output_len;

	char *mul_val;

	len1 = strlen(num1);
	len2 = strlen(num2);
	output_len = len1 + len2;

	mul_val = (char *)calloc(output_len + 1, sizeof(char));

	if (mul_val == NULL)
	{
		printf("Error");
		exit(1);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		int remd = 0, value = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			value = (num1[i] - '0') * (num2[j] - '0') + remd + mul_val[i + j + 1] - '0';
			remd = value / 10;
			mul_val[i + j + 1] = value % 10 + '0';
		}
		mul_val += remd;
	}

	return (mul_val);
}

/**
* main - this is the main function
* @argc: command line argument count
* @argv: argument count vector array
* Return: the multiple of integers passed as argument
*/

int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3 || !valid_number(argv[1]) || !valid_number(argv[2]))
	{
		fprintf(stderr, "Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	result = mul(num1, num2);

	printf("%s\n", result);

	free(result);
	return (0);
}


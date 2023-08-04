#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* valid_integer - this function checks if an array of
* string is a valid integer.
* @str: string array
* Return: true if string array is an intege, false otherwise
*/

bool valid_integer(char *str)
{
	char *endptr;

	strtol(str, &endptr, 10);
	return (*endptr == '\0');
}

/**
* main - this function performs the addition of all
* numbers passed to it as an argument in the command line
* @argc: command line argument count
* @argv: command line argument vector array
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int i, result;

	result = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int num;

			if (!(valid_integer(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[i]);

			result += num;
		}
		printf("%d\n", result);
	}
	return (0);
}

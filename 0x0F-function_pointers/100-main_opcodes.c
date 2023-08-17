#include <stdio.h>
#include <stdlib.h>

/**
* opcodes - this fuction print in opcodes
* @str: string array
* @str_bytes: number of bytes in the string
* Return: void
*/

void opcodes(unsigned char *str, int str_bytes)
{
	int i;

	for (i = 0; i < str_bytes; i++)
	{
		printf("%02x", *str++);
		if (i != (str_bytes - 1))
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
* main - this function takes command line arguments and output
* them in opcodes
* @argc: command line argumnet count
* @argv: command line argument array vector count
* Return: 0 on success 1 and 2 otherwise
*/

int main(int argc, char *argv[])
{
	int number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcodes((unsigned char *)main, number_of_bytes);

	return (0);
}

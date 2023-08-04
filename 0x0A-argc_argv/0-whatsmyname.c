#include <stdio.h>

/**
* main - this main function prints the nme of its
* executable program
* @argc: command line argument count
* @argv: command line argument vector array
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	if (argc >= 1)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>

/**
* main - this function printd the passed argument
* @argc: command line argument count
* @argv: command line argument vector array
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

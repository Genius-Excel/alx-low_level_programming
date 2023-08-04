#include <stdio.h>

/**
* main - this function counts the command line
* arguments passed to it and output it.
* @argc: command line argument count
* @argv: command line argument vector array
* Return: 0 for succcess
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

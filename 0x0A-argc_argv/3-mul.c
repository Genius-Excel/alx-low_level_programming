#include <stdio.h>
#include <stdlib.h>
/**
* main - this function output the value of the multiplied
* first and second arguments which are numbers
* @argc: command line argument count
* @argv: command line argument vector array
* Return: 0 for succes
*/

int main(int argc, char *argv[])
{
	int result, first_num, secd_num;

	result = 0;

	if (argc >= 1)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

		first_num = atoi(argv[1]);

		secd_num = atoi(argv[2]);

		result = first_num * secd_num;

		printf("%d\n", result);
	}
	return (0);
}

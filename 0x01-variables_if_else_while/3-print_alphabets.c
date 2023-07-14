#include <stdio.h>

/**
* main - this is the main function
* Return: always 0
*/

int main(void)
{
	int lower, upper;

	for (lower = 0; lower < 26; lower++)
	{
		putchar('a' + lower);
	}
	for (upper = 0; upper < 26; upper++)
	{
		putchar('A' + upper);
	}
	putchar('\n');
	return (0);
}

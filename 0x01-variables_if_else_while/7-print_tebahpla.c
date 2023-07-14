#include <stdio.h>

/**
* main - this it the main function
* Return:always 0
*/

int main(void)
{
	int num;

	for (num = 25; num >= 0; num--)
	{
		putchar('a' + num);
	}
	putchar('\n');
	return (0);
}

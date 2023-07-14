#include <stdio.h>

/**
* main - this is the main function
* Return:always 0
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
* main - this is the main function
* Return:always 0
*/

int main(void)
{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
	{
		putchar('0' + num1);
		if (num1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

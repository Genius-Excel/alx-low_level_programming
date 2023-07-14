#include <stdio.h>

/**
* main - this is the main function
* Return:always 0
*/

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else
		{
			putchar('a' + (num - 10));
		}
	}
	putchar('\n');
	return (0);
}

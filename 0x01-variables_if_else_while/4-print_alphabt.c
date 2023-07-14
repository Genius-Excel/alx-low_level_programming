#include <stdio.h>

/**
* main - this is the main function
* Return:always 0
*/

int main(void)
{
	int lower, odd;

	for (lower = 0; lower < 26; lower++)
	{
		odd = ('a' + lower);

		if (odd != 'e' && odd != 'q')
		{
			putchar('a' + lower);
		}
	}
	putchar('\n');
	return (0);
}

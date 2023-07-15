#include <stdio.h>
/**
* main - this is the main function
* Return:always 0
*/

int main(void)
{
	int a, b, firsta, lasta, firstb, lastb;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			firsta = a / 10;
			lasta = a % 10;
			firstb = b / 10;
			lastb = b % 10;

			putchar('0' + firsta);
			putchar('0' + lasta);
			putchar(' ');
			putchar('0' + firstb);
			putchar('0' + lastb);

			if (a != 9 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

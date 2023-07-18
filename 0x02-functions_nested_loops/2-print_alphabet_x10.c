#include "main.h"
#include <unistd.h>

/**
* print_alphabet_x10 - outputs alphabets
* Return : always 0
*/

void print_alphabet_x10(void)
{
	int n, line;

	for (line = 0; line < 10; line++)
	{
		for (n = 0; n < 26; n++)
		{
		_putchar('a' + n);
		}
		_putchar('\n');
	}
}

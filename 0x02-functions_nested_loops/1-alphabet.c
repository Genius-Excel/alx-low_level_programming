#include "main.h"
#include <unistd.h>
/**
* print_alphabet - this is the main function
* Return:always 0
*/

void print_alphabet(void)
{
	int n;

	for (n = 0; n < 26; n++)
	{
		_putchar('a' + n);
	}
	_putchar('\n');
}

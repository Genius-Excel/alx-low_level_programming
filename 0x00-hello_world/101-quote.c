#include <unistd.h>

/**
* main - this is the main function
*
* Return:always 0
*/

int main(void)
{
	char texts[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, texts, sizeof(texts) - 1);
	return (1);
}

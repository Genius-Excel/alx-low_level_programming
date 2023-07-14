#include <unistd.h>

/**
* main - this is the main function
*
* Return:always 0
*/

int main(void)
{
	char text1[] = "and that piece of art is useful\" - Dora Korpar, ";
	char text2[] = "2015-10-19\n";

	write(2, text1, sizeof(text1) - 1);
	write(2, text2, sizeof(text2) - 1);
	return (1);
}

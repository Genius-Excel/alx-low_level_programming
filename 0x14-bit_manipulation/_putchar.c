#include <unistd.h>

/**
* _putchar - this function takes a car as argument
* nd prints it to the standard output.
* @c: character to be printed.
* Return: address of the chracter to be printed.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - this function output a string in reverse
* this function uses the recursive function
* @s: string array to be printed
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

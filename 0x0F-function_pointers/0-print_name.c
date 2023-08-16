#include "function_pointers.h"

/**
* print_name - this function takes an argument and prints
* to standard output
* @name: name parameter of the function
* @f: function pointer
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

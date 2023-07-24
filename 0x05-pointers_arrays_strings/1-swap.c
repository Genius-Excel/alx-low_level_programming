#include "main.h"

/**
* swap_int - changes the values of two num
* @a: first number
* @b: second number
* Return: void
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}

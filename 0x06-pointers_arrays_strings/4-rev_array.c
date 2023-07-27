#include "main.h"
#include <stdio.h>

/**
* reverse_array - prints rray in reverse
* @a : array to be reversed
* @n: number of elements in array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, rev_arr;

	for (i = 0; i < n / 2; i++)
	{
		rev_arr = a[i];

		a[i] = a[n - i - 1];

		a[n - i - 1] = rev_arr;
	}
}

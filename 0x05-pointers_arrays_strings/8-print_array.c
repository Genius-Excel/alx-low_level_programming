#include "main.h"
#include <stdio.h>

/**
 * print_array - ouputs the elemets in an array
 * @a: adrress of the element in array
 * @n: lenght of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);

		if (idx < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
* print_diagsums - thisfunction prints the sum of diagonals
* @a: array of numbers
* @size: size of array
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j;

	int first_diag = 0;

	int second_diag = 0;

	for (i = 0; i < size; i++)
	{
		first_diag += a[i * size + i];
	}

	for (j = 0; j < size; j++)
	{
		second_diag += a[j * size + (size - 1 - j)];
	}

	printf("%d, %d\n", first_diag, second_diag);
}

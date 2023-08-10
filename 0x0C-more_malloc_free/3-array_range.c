#include "main.h"
#include <stdlib.h>

/**
* array_range - this function ccalculates a range of numbers
* @min: minimum number
* @max: maximum number
* Return: pointer to the address of a list of numbers
*/

int *array_range(int min, int max)
{
	int *num_arr, arr_size, i;

	if (min > max)
	{
		return (NULL);
	}

	arr_size = max - min + 1;

	num_arr = (int *)malloc(arr_size * sizeof(int));

	if (num_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < arr_size; i++)
	{
		num_arr[i] = min + i;
	}

	return (num_arr);
}

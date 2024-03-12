#include "search_algos.h"

/**
* binary_search - this fnction performs a binary search on a sorted array.
* @array: this represents the araay to be searched.
* @size: this represents the size of the aray to be searched.
* @value: this is the value to be searhced in the array.
* Return: index of the vlue in the array else -1.
*/

int binary_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value)
{
	size_t left_arr;

	size_t right_arr;

	size_t mid_arr;

	left_arr = 0;

	right_arr = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left_arr <= right_arr)
	{
		size_t arr_idx;

		/*print the sorted array sperated by comma*/
		printf("Searching in array: ");
		for (arr_idx = left_arr; arr_idx <= right_arr; arr_idx++)
		{
			printf("%d", array[arr_idx]);
			if (arr_idx < right_arr)
			{
				printf(", ");
			}
		}
		putchar('\n');

		mid_arr = (left_arr + right_arr) / 2;

		if (array[mid_arr] == value)
		{
			return (mid_arr);
		}
		else if (array[mid_arr] < value)
		{
			left_arr = mid_arr + 1;
		}
		else
		{
			right_arr = mid_arr - 1;
		}
	}

	return (-1);
}

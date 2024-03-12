#include "search_algos.h"

/**
* linear_search - this function searches for an integer in a array.
* @array: array which the integer is to be searched.
* @size: this represents the size of the array.
* @value: integer value to be serched for in the array.
* Return: index where the first element is located else -1.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t arr_idx;

	if (array == NULL)
	{
		return (-1);
	}

	for (arr_idx = 0; arr_idx < size; arr_idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", arr_idx, array[arr_idx]);
		if (array[arr_idx] == value)
		{
			return (arr_idx);
		}
	}

	return (-1);
}

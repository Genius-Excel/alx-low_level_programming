#include "function_pointers.h"
#include <stdbool.h>

/**
* int_index - this function check for the index of an
* integer element in array
* @array: array of elements to be checked
* @size: size of the array
* @cmp: function to compare if element is an integer
* Return: returns the index of the first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num_index;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		num_index = 0;

		if (cmp(array[i]) != false)
		{
			num_index = i;
			return (num_index);
		}
	}

	return (-1);
}

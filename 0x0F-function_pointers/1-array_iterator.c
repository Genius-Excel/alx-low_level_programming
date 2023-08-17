#include "function_pointers.h"

/**
* array_iterator - this function goes through the array element
* @array: array of numbers
* @size: size of the array
* @action: function pointers
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

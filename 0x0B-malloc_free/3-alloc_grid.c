#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - this function allocates a 0 value to
* two-demensional array of an integer
* @width: size width or number of rows in the array
* @height: size height or number of columns in the array
* Return: the value of the array
*/

int **alloc_grid(int width, int height)
{
	int i, j;

	int **two_d_arr;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	two_d_arr = (int **)malloc(height * sizeof(int *));

	if (two_d_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		two_d_arr[i] = (int *)malloc(width * sizeof(int));

		if (two_d_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(two_d_arr[j]);
			}
			free(two_d_arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			two_d_arr[i][j] = 0;
		}
	}
	return (two_d_arr);
}

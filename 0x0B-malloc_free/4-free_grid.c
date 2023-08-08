#include "main.h"
#include <stdlib.h>

/**
* free_grid - this functions frees th array of a grid
* @grid: the array of grid to be freed
* @height: height of grid to be freed
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

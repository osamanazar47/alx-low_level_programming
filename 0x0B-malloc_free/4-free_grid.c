#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - for freeing the grid
 * @grid: the 2d array
 * @height: the height of the array
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

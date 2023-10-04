#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: the colunms of the 2d array
 * @height: the rows of the 2d array
 * Return: a pointer to the memory allocation of the 2d array
 */
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			free_grid(s, i);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
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

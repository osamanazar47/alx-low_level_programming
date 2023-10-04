#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: the colunms of the 2d array
 * @height: the rows of the 2d array
 * Return: a pointer to the memory allocation of the 2d array
 */
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

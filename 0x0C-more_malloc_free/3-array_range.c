#include "mian.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers between min and max
 * @min: minimum value in the string
 * @max: maximum value in the string
 * Return: pointer to the array of integers
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min++;
	}
	return (arr);
}

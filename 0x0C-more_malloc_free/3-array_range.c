#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers between min and max
 * @min: minimum value in the string
 * @max: maximum value in the string
 * Return: pointer to the array of integers
 */
int *array_range(int min, int max)
{
	int *arr, i, length;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	arr = malloc(length * sizeof(int));
	if (!arr)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}

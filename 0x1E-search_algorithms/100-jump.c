#include "search_algos.h"
/**
* jump_search - A function that searches for a value in a sorted array of
* integers using jump search algorithm
* @array: a pointer to the first elemet of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the first index where value is located or -1 on failure
*/
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (array[prev] < value && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);

	for (i = prev - step; i <= prev && i < (int)size; i++)

	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

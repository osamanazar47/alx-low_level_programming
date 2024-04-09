#include "search_algos.h"
/**
* linear_search - a function that searches for a value in an array of integers
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the first ndex where value is or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	int i_size = (int)size;

	if (array != NULL)
	{
		for (i = 0; i < i_size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	}
	return (-1);
}

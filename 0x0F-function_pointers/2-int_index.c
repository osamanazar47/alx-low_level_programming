#include "function_pointers.h"
/**
 * int_index -  returns index of which cmp doesn't return 0
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: the function that compares values
 * Return: the index of which cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		int RETURN = cmp(array[i]);

		if (RETURN != 0)
			return (i);
	}
	return (-1);
}

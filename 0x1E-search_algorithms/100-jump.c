#include "search_algos.h"
/**
 * jump_search - A function that searches for a value in a sorted array of
 * integers using jump search algorithm
 * @array: a pointer to the first elemet of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the firstindex where value is located or -1 on failure
*/
int jump_search(int *array, size_t size, int value)
{
	int f = 0, j = sqrt(size);
	int l = j;

	if (array == NULL)
	{
		return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", f, array[f]);
	while (array[l] < value && l < (int)size)
	{
		f += j;
		l += j;
		printf("Value checked array[%d] = [%d]\n", f, array[f]);
	}
	printf("Value found between indexes [%d] and [%d]\n", f, l);
	if (array[f] < value && array[l] >= value && array[f] < (int)size)
	{
		while (array[f] < value)
		{
			printf("Value checked array[%d] = [%d]\n", f, array[f]);
			f += 1;
		}
		printf("Value checked array[%d] = [%d]\n", f, array[f]);
		return (f);
	}
	else
	{
		printf("Value checked array[%d] = [%d]\n", f, array[f]);
		return (-1);
	}
}

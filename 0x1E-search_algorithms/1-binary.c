#include "search_algos.h"
/**
 * print_array - prints the array
 * @array: the array to be printed
 * @b: the beginning of the array
 * @e: the end of the array
*/
void print_array(int *array, int b, int e)
{
	int i;

	printf("Searching in array:");
	for (i = b; i <= e; i++)
	{
		if (i != e)
		{
			printf(" %d,", array[i]);
		}
		else
		{
			printf(" %d\n", array[i]);
		}
	}
}
/**
 * binary_search - a function that searches for a value ina sorted array
 * of integers using binary search
 * @array: a pointer to te first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the index whee value is located or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int b = 0, e = (int)size - 1, m;

	if (array == NULL)
	{
		return (-1);
	}
	while (b <= e)
	{
		print_array(array, b, e);
		m = b + (e - b) / 2;
		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			b = m + 1;
		}
		else
		{
			e = m - 1;
		}
	}
	return (-1);
}

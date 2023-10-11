#include "function_pointers.h"
/**
 * array_iterator - executes each element of an array
 * @array: the array of functions
 * @size: size of the array
 * @action: the pointer to the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size != 0 && array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

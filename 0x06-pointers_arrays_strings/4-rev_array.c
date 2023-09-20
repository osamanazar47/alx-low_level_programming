#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the content of an array of integers
 * @a: the pointer to the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n -1;

	while (start < end)
	{
		int os = *start;
		*start = *end;
		*end = os;

		start++;
		end--;
	}
}

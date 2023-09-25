#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: the pointer to the matrix array
 * @size: the size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d", sum1);
	printf(", %d", sum2);
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the elements of an array
 * @a: the string
 * @n: number of the elements of the array
 * Return: vod
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

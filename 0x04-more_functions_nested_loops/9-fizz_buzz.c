#include <stdio.h>
#include "main.h"
/**
 * main - printing fizzbuzz
 * Return: o for success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" fizzbuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" buzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}

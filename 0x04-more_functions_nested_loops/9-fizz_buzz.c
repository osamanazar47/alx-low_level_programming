#include <stdio.h>
/**
 * main - printing fizzbuzz
 * Return: o for success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz");
		else
			printf("%d", i);
		
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}

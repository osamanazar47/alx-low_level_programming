#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: the number of arguments
 * @argv: an array of strings that are arguments
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int change = 0;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; (size_t)i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		change += (cents / arr[i]);
		cents = cents % arr[i];
	}
	printf("%d\n", change);
	return (0);
}

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
	int cents = atoi(argv[1]);
	int change = 0;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; arr[i] != '\0'; i++)
	{
		change += (cents / arr[i]);
		cents = cents % arr[i];
	}
	printf("%d\n", change);
	return (0);
}

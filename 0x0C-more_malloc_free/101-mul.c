#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv:: an array of strings of arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;
	int i, j;
	char *dig;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		dig = argv[i];
		j = 0;
		while (dig[j] != '\0')
		{
			if (!isdigit(dig[j]))
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}

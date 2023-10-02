#include <stdio.h>
#include <stdlib.h>
/**
 * main - program the multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of strings
 * Return: 0 if success 1 if not
 */
int main(int argc, char *argv[])
{
	int add;

	if (argc != 3)
	{
		printf("0\n");
		return (0);
	}
	if (*argv[1] >= '0' && *argv[1] <= '9' && *argv[2] >= '0' && *argv[2] <= '9')
	{
		add = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", add);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

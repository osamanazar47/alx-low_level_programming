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
	int add = 0;
	int i;

	if (argc <= 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}

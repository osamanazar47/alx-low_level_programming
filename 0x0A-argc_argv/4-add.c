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
	int i;

	add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			add += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}

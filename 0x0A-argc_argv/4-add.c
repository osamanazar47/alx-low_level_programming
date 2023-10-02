#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program the multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of strings
 * Return: 0 if success 1 if not
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i = 1, j;
	char *dig;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		dig = argv[i];
		j = 0;

		while (dig[j] != '\0')
		{
			if (!isdigit(dig[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}

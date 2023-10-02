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
	int mul;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);
}

#include <stdio.h>
/**
 * main - prits all arguments it receives
 * @argc: the number of arguments
 * @argv: an array of arguments as strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		puts(argv[i]);
	}
	return (0);
}

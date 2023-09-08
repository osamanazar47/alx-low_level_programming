#include <stdio.h>
/**
 * main - is the main function
 *
 * Return: 0 as always
 */

int main(void)
{
	printf("Size of a char: %zu byte\n", sizeof(char));
	printf("Size of an int: %zu byte\n", sizeof(int));
	printf("Size of a long int: %zu byte\n", sizeof(long int));
	printf("Size of a long long int: %zu byte\n", sizeof(long long int));
	printf("Size of float: %zu byte\n", sizeof(float));
	return (0);
}

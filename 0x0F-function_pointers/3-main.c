#include "3-calc.h"
/**
 * main - calculating different operations
 * @argc: the number of arguments
 * @argv: an array of arguments as strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	char *operator = argv[2];

	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operation(num1, num2));
	return (0);
}
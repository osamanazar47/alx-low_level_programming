#include "3-calc.h"
/**
 * op_add - adds the two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the sub of the two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the subtraction of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply to integers and return the result
 * @a: the first integer
 * @b: the second integer
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: the first
 * @b: the second integer
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - the left of the division of the two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

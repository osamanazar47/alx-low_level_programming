#include "main.h"
/**
 * mul - multiple two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 for success
 */
int mul(int a, int b)
{
	int mult;

	mult = a * b;
	_putchar(mult + '0');
	return (mult);
}

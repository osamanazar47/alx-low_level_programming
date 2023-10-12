#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments
 * Return: the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, current;

	if (n == 0)
		return (0);
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current = va_arg(args, int);

		sum += current;
	}
	va_end(args);
	return (sum);
}

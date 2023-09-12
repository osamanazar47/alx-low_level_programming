#include "main.h"
/**
 * print_sign - a function that prints the sign of the number
 *
 * @n: the number we want to know the sign of
 *
 * Return: 1 for +, 0 for 0, -1 for -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: 0 for success
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + n % 10);
}

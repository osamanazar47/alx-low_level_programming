#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10 != 0)
	{
		print_nummber(num / 10);
	}
	_putchar('0' + (num % 10));
}

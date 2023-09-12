#include "main.h"
/**
 * print_last_digit - a function that print the last digit of a number
 * @n: the number which its last number will be printed
 * Return: 0 for success
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar('0' + last_digit);
}

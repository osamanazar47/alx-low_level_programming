#include "main.h"
/**
 * print_last_digit - a function that print the last digit of a number
 * @n: the number which its last number will be printed
 * Return: value of the last digit number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last =  last * -1;
	}
	_putchar(last + '0');
	return (last);
}

#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int num = 0;

	do
	{
		_puchar(num + 48);
		num++;
	}
	while (num >= 0 && n <= 9);
	_putchar('\n');
}

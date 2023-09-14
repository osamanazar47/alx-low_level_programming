#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + '0');
		num++;
	} while (num <= 9);

	_putchar('\n');
}

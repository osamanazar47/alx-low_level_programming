#include "main.h"
/**
 * print_line - draws straight line in the terminal
 * @n: the number of _ should be printed
 * return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

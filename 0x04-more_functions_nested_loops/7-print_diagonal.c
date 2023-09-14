#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		int i = n;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}

#include "main.h"
/**
 * times_table - a function that prints the 9 times table
 *
 * Return: 0 as always
 */
void times_table(void)
{
	int i, j = 9, result;

	for (i = 0; i <= 10; i++)
	{
		result = i * j;

		putchar(i + '0');
		putchar(' ');
		putchar('*');
		putchar(' ');
		putchar(j + '0');
		putchar(' ');
		putchar('=');
		putchar(' ');
		putchar(result + '0');
		putchar('\n');
	}
	return (result);
}

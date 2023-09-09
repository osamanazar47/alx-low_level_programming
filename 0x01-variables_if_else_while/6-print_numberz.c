#include <stdio.h>
/**
 * main - function for printing single digit base 10 numbers
 *
 * Return: 0 is success
 */
int main (void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}

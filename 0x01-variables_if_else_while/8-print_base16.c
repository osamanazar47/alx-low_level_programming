#include <stdio.h>
/**
 * main - main function for printing hexadecimal numbers
 *
 * Return: 0 is for success
 */
int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
{
	putchar(h);
}
for (h = 'a'; h <= 'f'; h++)
{
	putchar(h);
}
putchar('\n');
return (0);
}

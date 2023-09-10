#include <stdio.h>
/**
 * main - the function that prints all combinations with specific rules
 *
 * Return: 0 is for success
 */
int main(void)
{
	int i, j, first_combination = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i < j)
			{
				if (!first_combination)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					first_combination = 0;
				}
				putchar('0' + i);
				putchar('0' + j);
			}
		}
	}
	putchar('\n');
	return (0);
}

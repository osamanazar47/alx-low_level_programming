#include <stdio.h>
/**
 * main - function for printing three digits combination
 * Return: 0 for success
 */
int main(void)
{
	int first_combination = 1;

	for (int i = 0; i <= 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			for (int k = j + 1; k <= 9; k++)
			{
				if (i < j && j < k)
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
					putchar('0' + k);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

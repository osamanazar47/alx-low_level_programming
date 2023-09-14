#include <stdio.h>
#include <math.h>
/**
 * main - prints largest prime numbers
 * Return: 0 for success
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
}



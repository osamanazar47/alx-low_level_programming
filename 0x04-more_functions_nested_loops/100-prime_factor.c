#include <stdio.h>
#include "mian.h"

/**
 * main - prints the largest prime numbers
 * Return: 0 always
 */

int main(void)

{
	long largest = -1;

    // Divide n by 2 until it's odd
    while (n % 2 == 0)
    {
        largest = 2;
        n /= 2;
    }

    // Check for prime factors starting from 3
    for (long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    // If n is a prime number greater than 2, it's the largest prime factor
    if (n > 2)
        largest = n;

    return largest;
}

int main(void)
{
    long number = 612852475143;
    long largest = largest_prime_factor(number);

    printf("%ld\n", largest);
    return 0;
}

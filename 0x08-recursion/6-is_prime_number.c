#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - a function returns 1 when prime 0 if else
 * @n: the number
 * @i: the first guess
 * Return: 0 when n is less than 0
 */
int _prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (_prime(n, 5));
}
/**
 * _prime - recursive function for finding prime numbers
 * @n: the number
 * @i: the first guess
 * Return: 1 for prime 0 for non
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (_prime(n, i - 1));
}

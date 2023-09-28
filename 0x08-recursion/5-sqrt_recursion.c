#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function that returns the natural square rootof a number
 * @n: the number
 * @i: the guess
 * Return: the natural square root of n
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
/**
 * _sqrt - a recursive function that finds the square root
 * @n: the number
 * @i: the guess
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

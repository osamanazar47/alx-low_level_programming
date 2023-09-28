#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function that returns the natural square rootof a number
 * @n: the number
 * @i: the guess
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n, int i)
{
	if (i <= 0)
		return (-1);
	if (i == n)
		return (-1);
	i = n / 10;

	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}

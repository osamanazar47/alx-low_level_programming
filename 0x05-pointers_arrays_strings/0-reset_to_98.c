#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function that a updates the value of an integer points to 98
 * @n: the integer that will be updated
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 402;
	int *p;

	*p = &n;
	*p = 98;
	return (0);
}

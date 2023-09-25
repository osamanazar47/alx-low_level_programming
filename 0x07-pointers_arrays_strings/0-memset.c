#include "main.h"
#include <stdio.h>
/**
 * _memset - fills specified memory location with a constant byte
 * @s: the pointer to the memory
 * @b: the constant byte
 * @n: the number of bytes filled with the constant
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

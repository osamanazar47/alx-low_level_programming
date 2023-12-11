#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies a memory area from dest to  src
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes that will be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

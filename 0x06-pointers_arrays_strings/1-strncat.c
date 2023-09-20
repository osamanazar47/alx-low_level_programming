#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates the first n characters of the src string
 * @dest: the distenation string
 * @src: the source string
 * @n: number of characters
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = strlen(dest);
	int i;

	for (i = 0, i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i] = '\0';

	return (dest);
}

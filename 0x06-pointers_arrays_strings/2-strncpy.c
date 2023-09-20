#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies n characters from the source to the distenation
 * @dest: the distenation string
 * @src: the source string
 * @n: number of copied characters
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

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
	strncpy(dest, src, n);
	return (dest);
}

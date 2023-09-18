#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy -  copies the string pointed to by src to the buffer pointed to by dest
 * @dest: pointer to the buffer
 * @src: pointer to the string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return dest;
}

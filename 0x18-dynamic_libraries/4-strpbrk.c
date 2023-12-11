#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the pointer to the string
 * @accept: the pointer to the second string
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int len1 = strlen(s);
	int len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}

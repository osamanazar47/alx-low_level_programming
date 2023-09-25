#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - locates a character in the string
 * @s: the pointer to the string
 * @c: the character the we want to locate
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int length = strlen(s);
	unsigned int i = 0;

	while (i < length)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

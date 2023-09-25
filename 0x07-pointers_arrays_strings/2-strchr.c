#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in the string
 * @s: the pointer to the string
 * @c: the character the we want to locate
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i  = 0;

	for (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

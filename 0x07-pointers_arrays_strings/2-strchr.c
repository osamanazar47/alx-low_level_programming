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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}

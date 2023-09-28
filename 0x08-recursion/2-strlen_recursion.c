#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - a recursive function that returns the length of string
 * @s: the pointer to the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

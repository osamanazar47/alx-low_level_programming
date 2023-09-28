#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - returns 1 if a string is palindrome 0 if not
 * @s: the string
 * @start: the starting point
 * @end: the end
 * Return: 1 if yes 0 if not
 */
int _palindrome(char *s, int start, int end);

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);
	return (_palindrome(s, 0, lenght - 1));
}
/**
 * _palindrome - a recursive function
 * @s: the string
 * @start: the starting point
 * @end: the end
 * Return: the same as above
 */
int _palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_palindrome(s, start + 1, end - 1));
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * wildcmp - compares two strings to check if they are identical
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if identical 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 < len2)
		return (0);
	if (*s2 == '*')
		return (1);
	if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}

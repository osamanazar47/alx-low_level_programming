#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of chars that will be concatenated
 * Return: a pointer to the string if success if not NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	s = malloc((len1 + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[len1 + n] = '\0';
	return (s);
}

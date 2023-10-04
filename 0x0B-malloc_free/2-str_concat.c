#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two string
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the concatenation, NULL if ail
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, s1);
	strcat(s, s2);
	return (s);
}

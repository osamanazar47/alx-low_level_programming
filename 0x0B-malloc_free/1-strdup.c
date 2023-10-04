#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: the string that wil be duplicated
 * Return: in success a pointer to the duplicate in fail NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int length = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc((length + 1) * sizeof(char));
	
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}

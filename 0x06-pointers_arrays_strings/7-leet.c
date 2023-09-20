#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - incoding language
 * @str: the string to be incoded into leet
 *
 * Return: str
 */
char *leet(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] == '7';
		}
		else if (str[i] ==  'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}

#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all the words of a string
 * @str: the string which wiil be capitalized
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		 str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		 str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		 str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		 str[i - 1] == '}')
		{
			str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
	}
	return (str);
}

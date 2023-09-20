#include "main.h"
#include <stdio.h>
/**
 * *cap_string - Capitalizes all words of a string
 * @str: the string to be capitalized
 *
 * Return: the modified string
 */
char *cap_string(char *str)
{
	int num = 0;

	while (str[num])
	{
		while (!(str[num] >= 'a' && str[num] <= 'z'))
			num++;

		if (str[num - 1] == ' ' || str[num - 1] == '\t' ||
		str[num - 1] == '\n' || str[num - 1] == ',' || str[num - 1] == '.' ||
		str[num - 1] == ';' || str[num - 1] == '!' || str[num - 1] == '?' ||
		str[num - 1] == '"' || str[num - 1] == '(' || str[num - 1] == ')' ||
		str[num - 1] == '{' || str[num - 1] == '}' || num == 0)
			str[num] -= 32;
		num++;
	}
	return (str);
}

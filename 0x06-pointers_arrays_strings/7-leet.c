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
	char leet_rep[256] = {0};

	leet_rep['a'] = '4';
	leet_rep['A'] = '4';
	leet_rep['e'] = '3';
	leet_rep['E'] = '3';
	leet_rep['o'] = '0';
	leet_rep['O'] = '0';
	leet_rep['t'] = '7';
	leet_rep['T'] = '7';
	leet_rep['l'] = '1';
	leet_rep['L'] = '1';
	int i = 0;

	while (str[i])
	{
		if (leet_rep[str[i]])
		{
			str[i] = leet_rep[str[i]];
		}
			i++;
	}
	return (str);
}

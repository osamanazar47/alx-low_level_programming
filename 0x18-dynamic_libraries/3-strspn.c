#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of the prefix substring
 * @s: the pointer to the string
 * @accept: the pointer to substring
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int len1 = strlen(s);
	int len2 = strlen(accept);
	int i, j;

	for (i = 0; i < len1; i++)
	{
		int found = 0;


		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		n++;
	}
	return (n);
}

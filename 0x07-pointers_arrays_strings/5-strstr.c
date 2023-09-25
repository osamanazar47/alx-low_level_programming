#include "main.h"
#include <stdio.h>
/**
 * _strstr - locayes a substring in the string
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			int match_start = i;

			while (haystack[i] == needle[j] && haystack[i] != '\0' &&
					needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[match_start]);
			}
			i = match_start;
		}
	}
	return (0);
}

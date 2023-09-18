#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse the string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	size_t length = strlen(s);
	char *start = s;
	char *end = s + length - 1;

	while (start < end)
	{
		char os = *start;
		*start = *end;
		*end = os;

		start++;
		end--;
	}
}

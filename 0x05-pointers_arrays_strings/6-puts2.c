#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts - prints every other character of the string
 * @str: the string
 * Return: void
 */
void puts(char *str)
{
	size_t length = strlen(str);
	int i = length - 1;

	while (i >= 0)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i--;
	}
}

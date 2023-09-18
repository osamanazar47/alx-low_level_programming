#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of the string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	size_t length = strlen(str);
	size_t start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2 + 1;
	}
	while (str[start_index] != '\0')
	{
		putchar(str[start_index]);
		start_index++;
	}
	putchar('\n');
}

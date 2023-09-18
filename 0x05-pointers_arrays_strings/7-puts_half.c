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
	size_t length = strlen(str) - 1;
	size_t i, start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

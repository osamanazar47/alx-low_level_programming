#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s:the string
 * Return: void
 */
void print_rev(char *s)
{
	int length = strlen(s), i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

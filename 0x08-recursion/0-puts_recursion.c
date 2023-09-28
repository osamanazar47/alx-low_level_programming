#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - a recursive function that prints a string
 * @s: the pointer to the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\0');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

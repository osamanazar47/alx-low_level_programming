#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - a recursive function that prints a string in reverse
 * @s: the pointer to the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

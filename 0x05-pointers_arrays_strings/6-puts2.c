#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of the string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

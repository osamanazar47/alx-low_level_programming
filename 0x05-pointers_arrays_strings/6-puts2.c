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
	int i = 0, size_t length = strlen(str);

	while (str[i] != '\0' && i < length)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

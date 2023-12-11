#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 * Return: 0 for lowercase 1 for uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

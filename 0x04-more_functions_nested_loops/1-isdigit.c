#include "main.h"

/**
 * _isdigit - checks if the character is a digit
 * @c: the character to check
 * Return: 1 for digit 0 for else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

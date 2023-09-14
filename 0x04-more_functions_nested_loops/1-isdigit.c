#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: the character that will be checked
 * Return: 1 for digit 0 for else
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

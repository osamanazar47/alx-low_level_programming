#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if letter o if other
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

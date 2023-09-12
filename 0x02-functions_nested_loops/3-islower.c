#include "main.h"
/**
 * _islower - a function for checking lowercase letter c
 *@c: the character to be checked
 * Return: 0 as always
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

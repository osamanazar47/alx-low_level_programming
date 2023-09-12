#include "main.h"
/**
 * main - a function for checking lowercase letter c
 *
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

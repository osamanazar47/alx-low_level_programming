#include "main.h"
/**
 * main - the main function
 * _isupper - a function that checks the uppercase character
 * Return: 0 for lowercase 1 for uppercase
 */
int _isupper(int c)
{
	if (c >= '65' && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

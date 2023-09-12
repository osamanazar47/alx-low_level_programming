#include "main.h"
/**
 * main - a function for checking lowercase letter c
 *
 * Return: 0 as always
 */

int main(void)
{
	char testchar = 'c';

	if (_islower(testchar))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

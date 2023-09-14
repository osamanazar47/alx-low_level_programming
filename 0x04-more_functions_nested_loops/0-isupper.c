#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 * Return: 0 for lowercase 1 for uppercase
 */
int _isupper(int c)
{
	for (char letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
	}
	return (0);
}

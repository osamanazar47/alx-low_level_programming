include "main.h"
/**
 * print_alphabet_x10 - a function to print the alphabets 10 times
 * Return: 0 as always
 */
void print_alphabet_x10(void)
{
	for (int i = 1; i <= 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++
		}
		_putchar('\n');
		return (0);
	}
}


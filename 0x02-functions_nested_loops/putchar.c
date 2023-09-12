#include <unistd.h>

int _putchar(char c)
{
	return write(1, &c, 1);
}

void print_alphabet(void)
{
	char letter = 'a'
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');
}
void print_alphabet_x10(void)
{
	int i;
	for (i = 1; 1 <= 10; i++)
	{
		char letter = 'a'
			while (letter <= 'z'
					{
					_Putchar(letter);
					letter++;
					}
					_putchar('\n');
					}
include "main.h"

int _islower(int c);
{

}

#include "main.h"
#include <ctype.h>
int _isalpha(int c)
{
}

int print_sign(int n)
{
}

int _abs(int)
{
}

#include "main.h"

int print_last_digit(int)
{
	int last_digit;

	if (i < 0)
	{
		last_digit = -n % 10;
	}
	else
	{
		last_digit = n % 10;
	}
}

void jack_bauer(void)
{
	for (int hour = 0; hour <= 23; hour++)
	{
		for (int minute = 0; minute <= 59; minute++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
		}
	}
}

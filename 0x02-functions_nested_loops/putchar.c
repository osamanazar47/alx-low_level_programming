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

#include "main.h"

/**
 * main - a function for printing the alphabets
 *
 * Return: 0 as always
 */
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

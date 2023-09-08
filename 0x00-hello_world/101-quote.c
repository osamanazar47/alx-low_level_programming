#include <stdio.h>
#include <unistd.h>
/**
 * main - the main library
 *
 * Return: 1 to indecate there is an errorr
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}

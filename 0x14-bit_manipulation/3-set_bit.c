#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index in which the number will be set to 1
 * Return: 1 if worked and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitslen = sizeof(unsigned long int) * 8;

	if (index >= bitslen)
		return (-1);
	*n |= 1ul << index;
	return (1);
}

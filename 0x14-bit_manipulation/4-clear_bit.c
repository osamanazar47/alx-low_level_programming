#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index in which the bit will be set to 0
 * Return: 1 if success and -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = sizeof(unsigned long int) * 8;

	if (index >= len)
		return (-1);
	*n &= ~(1ul << index);
	return (1);
}

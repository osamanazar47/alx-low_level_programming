#include "main.h"
/**
 * get_bit - returns the value of the bit in a given index
 * @n: the number in decimal
 * @index: the index
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0, bitslen = sizeof(unsigned long int) * 8;

	if (index >= bitslen)
		return (-1);
	while (count != index)
	{
		n >>= 1;
		count++;
	}
	return (n & 1);
}

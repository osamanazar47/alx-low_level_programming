#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: the first number
 * @m: the second number
 * Return: the number of bits that need to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_res = n ^ m;

	while (xor_res)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}
	return (count);
}

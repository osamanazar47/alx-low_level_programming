#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: the binary numberas a string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	while (i >= 0)
	{
		sum += (b[i] - '0') * (1 << j);
		i--;
		j++;
	}
	return (sum);
}

#include "main.h"
/**
 * binary_to_unit - converts binary number to unsigned integer
 * @b: the binary numberas a string
 * Return: the converted number or 0
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int i = 0, j = strlen(b) - 1, sum = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[j] - '0') * (1 << i);
		i++;
		j--;
	}
	return (sum);
}
